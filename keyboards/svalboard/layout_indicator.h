#include "quantum.h"

#define SVAL_ACITVE_LAYER  0xA5
#define REFRESH_TIMEOUT_MS 30000  // Client must refresh every 30 seconds

bool get_is_layout_indicator_active(void);
void enable_layout_indicator(void);
void disable_layout_indicator(void);