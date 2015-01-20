#ifndef ROCK_CONSOLE_BRIDGE_CONSOLE_H
#define ROCK_CONSOLE_BRIDGE_CONSOLE_H

#include <base/Logging.hpp>

#define logDebug(FORMAT, ARGS...) do { LOG_DEBUG(FORMAT, ## ARGS); } while(0)
#define logInfo(FORMAT, ARGS...) do { LOG_INFO(FORMAT, ## ARGS); } while(0)
#define logWarn(FORMAT, ARGS...) do { LOG_WARN(FORMAT, ## ARGS); } while(0)
#define logError(FORMAT, ARGS...) do { LOG_ERROR(FORMAT, ## ARGS); } while(0)
#define logFatal(FORMAT, ARGS...) do { LOG_FATAL(FORMAT, ## ARGS); } while(0)
#define logInform(FORMAT, ARGS...) do { LOG_INFO(FORMAT, ## ARGS); } while(0)

#endif
