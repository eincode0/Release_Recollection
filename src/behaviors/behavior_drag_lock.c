/* ============================================================
 * behavior_drag_lock.c
 *
 * 〈Drag Lock〉— ワンキーで MB1 押下/解放をトグルする
 * stateful behavior。caps_word と同パターンで内部状態を持ち、
 * タップごとに子 binding (on-binding / off-binding) を切り替えて
 * 起動する。
 *
 * HID API を直接叩くと module → ZMK app のリンクで未解決参照が
 * 出るため、既に動作している drag_on / drag_off マクロを子として
 * 呼び出す phandle dispatch 方式を採用。
 *
 * 一度押し込めば、剣を振り続けなくとも斬撃の軌道は維持される。
 * ============================================================ */

#define DT_DRV_COMPAT zmk_behavior_drag_lock

#include <zephyr/device.h>
#include <drivers/behavior.h>
#include <zephyr/logging/log.h>

#include <zmk/behavior.h>

LOG_MODULE_REGISTER(behavior_drag_lock, CONFIG_ZMK_LOG_LEVEL);

struct behavior_drag_lock_config {
    struct zmk_behavior_binding on_bindings;
    struct zmk_behavior_binding off_bindings;
};

/* Cardinal-tracked global state. Multiple instances share the same flag — by
 * design, there is only one active drag lock at any time. */
static bool drag_locked = false;

static int on_drag_lock_binding_pressed(struct zmk_behavior_binding *binding,
                                        struct zmk_behavior_binding_event event) {
    const struct device *dev = zmk_behavior_get_binding(binding->behavior_dev);
    const struct behavior_drag_lock_config *cfg = dev->config;

    struct zmk_behavior_binding child;
    if (drag_locked) {
        child = cfg->off_bindings;
        drag_locked = false;
        LOG_DBG("〈Drag Lock〉released — invoking off-binding");
    } else {
        child = cfg->on_bindings;
        drag_locked = true;
        LOG_DBG("〈Drag Lock〉engaged — invoking on-binding");
    }

    return zmk_behavior_invoke_binding(&child, event, true);
}

static int on_drag_lock_binding_released(struct zmk_behavior_binding *binding,
                                         struct zmk_behavior_binding_event event) {
    ARG_UNUSED(binding);
    ARG_UNUSED(event);
    return ZMK_BEHAVIOR_OPAQUE;
}

static const struct behavior_driver_api behavior_drag_lock_driver_api = {
    .binding_pressed = on_drag_lock_binding_pressed,
    .binding_released = on_drag_lock_binding_released,
};

static int behavior_drag_lock_init(const struct device *dev) {
    ARG_UNUSED(dev);
    return 0;
}

#define EXTRACT_BINDING(node_id, prop_name)                                                        \
    {                                                                                              \
        .behavior_dev = DEVICE_DT_NAME(DT_PHANDLE_BY_IDX(node_id, prop_name, 0)),                  \
        .param1 = COND_CODE_0(DT_PHA_HAS_CELL_AT_IDX(node_id, prop_name, 0, param1), (0),          \
                              (DT_PHA_BY_IDX(node_id, prop_name, 0, param1))),                     \
        .param2 = COND_CODE_0(DT_PHA_HAS_CELL_AT_IDX(node_id, prop_name, 0, param2), (0),          \
                              (DT_PHA_BY_IDX(node_id, prop_name, 0, param2))),                     \
    }

#define DRAG_LOCK_INST(n)                                                                          \
    static const struct behavior_drag_lock_config behavior_drag_lock_cfg_##n = {                   \
        .on_bindings = EXTRACT_BINDING(DT_DRV_INST(n), on_bindings),                                 \
        .off_bindings = EXTRACT_BINDING(DT_DRV_INST(n), off_bindings),                               \
    };                                                                                             \
    BEHAVIOR_DT_INST_DEFINE(n, behavior_drag_lock_init, NULL, NULL,                                \
                            &behavior_drag_lock_cfg_##n, POST_KERNEL,                              \
                            CONFIG_KERNEL_INIT_PRIORITY_DEFAULT,                                   \
                            &behavior_drag_lock_driver_api);

DT_INST_FOREACH_STATUS_OKAY(DRAG_LOCK_INST)
