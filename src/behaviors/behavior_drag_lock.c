/* ============================================================
 * behavior_drag_lock.c
 *
 * 〈Drag Lock〉— MB1 ホールド状態をワンキーでトグルする
 * stateful behavior。caps_word と同じく内部状態を持ち、
 * タップごとに MB1 の押下/解放を切り替える。
 *
 * 一度押し込めば、剣を振り続けなくとも斬撃の軌道は維持される。
 * ============================================================ */

#define DT_DRV_COMPAT zmk_behavior_drag_lock

#include <zephyr/device.h>
#include <drivers/behavior.h>
#include <zephyr/logging/log.h>

#include <dt-bindings/zmk/mouse.h>
#include <zmk/behavior.h>
#include <zmk/hid.h>
#include <zmk/endpoints.h>

LOG_MODULE_REGISTER(behavior_drag_lock, CONFIG_ZMK_LOG_LEVEL);

/* Cardinal-tracked global state. There is only one Drag Lock at any
 * time — multiple instances share the same lock flag. */
static bool drag_locked = false;

static int on_drag_lock_binding_pressed(struct zmk_behavior_binding *binding,
                                        struct zmk_behavior_binding_event event) {
    ARG_UNUSED(binding);
    ARG_UNUSED(event);

    if (drag_locked) {
        zmk_hid_mouse_buttons_release(MB1);
        drag_locked = false;
        LOG_DBG("〈Drag Lock〉released — MB1 freed");
    } else {
        zmk_hid_mouse_buttons_press(MB1);
        drag_locked = true;
        LOG_DBG("〈Drag Lock〉engaged — MB1 held");
    }

    zmk_endpoints_send_mouse_report();
    return ZMK_BEHAVIOR_OPAQUE;
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

#define DRAG_LOCK_INST(n)                                                                          \
    BEHAVIOR_DT_INST_DEFINE(n, behavior_drag_lock_init, NULL, NULL, NULL, POST_KERNEL,             \
                            CONFIG_KERNEL_INIT_PRIORITY_DEFAULT,                                   \
                            &behavior_drag_lock_driver_api);

DT_INST_FOREACH_STATUS_OKAY(DRAG_LOCK_INST)
