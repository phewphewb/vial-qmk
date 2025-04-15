#include "keybard.h"

static uint16_t last_refresh_time = 0;
static bool keybard_active = false;

bool get_is_keybard_active(void) {
    if (keybard_active && timer_elapsed(last_refresh_time) > REFRESH_TIMEOUT_MS) {
        keybard_active = false;
        last_refresh_time = 0;
    }

    return keybard_active;
}

void refresh_keybard_active_timer(void) {
    keybard_active = true;
    last_refresh_time = timer_read();
}
