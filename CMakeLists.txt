# ============================================================
# Recollection in-tree behaviors
# ============================================================
# 〈Drag Lock〉— 同一キーで MB1 押下/解放をトグルする stateful behavior
# ============================================================

if(CONFIG_ZMK_BEHAVIOR_DRAG_LOCK)
    zephyr_library()
    zephyr_library_sources(src/behaviors/behavior_drag_lock.c)
    zephyr_library_include_directories(${ZEPHYR_BASE}/../zmk/app/include)
endif()
