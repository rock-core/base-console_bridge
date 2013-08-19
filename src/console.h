#ifndef ROCK_CONSOLE_BRIDGE_CONSOLE_H
#define ROCK_CONSOLE_BRIDGE_CONSOLE_H

#include <base/Logging.hpp>

#define logDebug(FORMAT, ARGS...) LOG_DEBUG(FORMAT, ## ARGS)
#define logInfo(FORMAT, ARGS...) LOG_INFO(FORMAT, ## ARGS)
#define logWarn(FORMAT, ARGS...) LOG_WARN(FORMAT, ## ARGS)
#define logError(FORMAT, ARGS...) LOG_ERROR(FORMAT, ## ARGS)
#define logFatal(FORMAT, ARGS...) LOG_FATAL(FORMAT, ## ARGS)
#define logInform(FORMAT, ARGS...) LOG_INFO(FORMAT, ## ARGS)

#endif
