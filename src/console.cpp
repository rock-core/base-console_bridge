#include "console.h"

void console_bridge::log(const char *file, int line, LogLevel level, const char* m, ...) {
    va_list __ap;
    va_start(__ap, m);
    switch (level) {
        case CONSOLE_BRIDGE_LOG_DEBUG : LOG_DEBUG(m, __ap); break;
        case CONSOLE_BRIDGE_LOG_INFO : LOG_INFO(m, __ap); break;
        case CONSOLE_BRIDGE_LOG_WARN : LOG_WARN(m, __ap); break;
        case CONSOLE_BRIDGE_LOG_ERROR : LOG_ERROR(m, __ap); break;
        case CONSOLE_BRIDGE_LOG_NONE : break;
    };
    va_end(__ap);
}
