#include "quantum.h"

#define REFRESH_TIMEOUT_MS 30000  // Client must refresh every 30 seconds

bool get_is_keybard_active(void);
void refresh_keybard_active_timer(void);