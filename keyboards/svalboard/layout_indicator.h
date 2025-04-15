#include "quantum.h"

#define SVAL_ACTIVE_LAYER_INDICATOR 0xA5
#define REFRESH_TIMEOUT_MS 30000 // Client must refresh every 30 seconds

enum active_layer_command_ids {
    active_layer_push    = 0x01,
    active_layer_refresh = 0x02,
};

bool get_is_layout_indicator_active(void);
void refresh_layout_indicator_timer(void);
void disable_layout_indicator(void);