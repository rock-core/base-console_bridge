#ifndef ROCK_CONSOLE_BRIDGE_CONSOLE_H
#define ROCK_CONSOLE_BRIDGE_CONSOLE_H

#include <base/Logging.hpp>

#define logDebug(FORMAT, ARGS...) do { LOG_DEBUG(FORMAT, ## ARGS); } while(0)
#define logInfo(FORMAT, ARGS...) do { LOG_INFO(FORMAT, ## ARGS); } while(0)
#define logWarn(FORMAT, ARGS...) do { LOG_WARN(FORMAT, ## ARGS); } while(0)
#define logError(FORMAT, ARGS...) do { LOG_ERROR(FORMAT, ## ARGS); } while(0)
#define logFatal(FORMAT, ARGS...) do { LOG_FATAL(FORMAT, ## ARGS); } while(0)
#define logInform(FORMAT, ARGS...) do { LOG_INFO(FORMAT, ## ARGS); } while(0)


/** \brief Message namespace. This contains classes needed to
    output error messages (or logging) from within the library.
    Message logging can be performed with \ref logging "logging macros" */
namespace console_bridge
{
/** \brief The set of priorities for message logging */
enum LogLevel
  {
    CONSOLE_BRIDGE_LOG_DEBUG = 0,
    CONSOLE_BRIDGE_LOG_INFO,
    CONSOLE_BRIDGE_LOG_WARN,
    CONSOLE_BRIDGE_LOG_ERROR,
    CONSOLE_BRIDGE_LOG_NONE
  };


/** \brief Set the minimum level of logging data to output.  Messages
    with lower logging levels will not be recorded. */
inline void setLogLevel(LogLevel level)
{
    logWarn("The rock implementation of console_bridge does not support setLogLevel()!");
}

/** \brief Retrieve the current level of logging data.  Messages
    with lower logging levels will not be recorded. */
inline LogLevel getLogLevel(void)
{
    logWarn("The rock implementation of console_bridge does not support getLogLevel()!");
    return CONSOLE_BRIDGE_LOG_INFO;
}

} // namespace console_bridge

#endif
