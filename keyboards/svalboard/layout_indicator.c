#include "layout_indicator.h"

static uint16_t last_refresh_time = 0;
static bool layout_indicator_active = false;

bool get_is_layout_indicator_active(void) {
    if (layout_indicator_active && timer_elapsed(last_refresh_time) > REFRESH_TIMEOUT_MS) {
        layout_indicator_active = false;
        last_refresh_time = 0;
    }

    return layout_indicator_active;
}

void refresh_layout_indicator_timer(void) {
    layout_indicator_active = true;
    last_refresh_time = timer_read();
}

void disable_layout_indicator(void) {
    layout_indicator_active = false;
    last_refresh_time = 0;
}
