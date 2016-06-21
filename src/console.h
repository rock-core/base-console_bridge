#ifndef ROCK_CONSOLE_BRIDGE_CONSOLE_H
#define ROCK_CONSOLE_BRIDGE_CONSOLE_H

#include <base-logging/Logging.hpp>


#ifdef __GNUC__
#define CONSOLE_BRIDGE_DEPRECATED __attribute__ ((deprecated))
#elif defined(_MSC_VER)
#define CONSOLE_BRIDGE_DEPRECATED __declspec(deprecated)
#else
#pragma message("WARNING: You need to implement DEPRECATED for this compiler")
#define CONSOLE_BRIDGE_DEPRECATED
#endif

static inline void CONSOLE_BRIDGE_DEPRECATED console_bridge_deprecated() {}

/** \file console.h
    \defgroup logging Logging Macros
    \{

    \def logError(fmt, ...)
    \brief Log a formatted error string.
    \remarks This macro takes the same arguments as <a href="http://www.cplusplus.com/reference/clibrary/cstdio/printf">printf</a>.

    \def logWarn(fmt, ...)
    \brief Log a formatted warning string.
    \remarks This macro takes the same arguments as <a href="http://www.cplusplus.com/reference/clibrary/cstdio/printf">printf</a>.

    \def logInform(fmt, ...)
    \brief Log a formatted information string.
    \remarks This macro takes the same arguments as <a href="http://www.cplusplus.com/reference/clibrary/cstdio/printf">printf</a>.

    \def logDebug(fmt, ...)
    \brief Log a formatted debugging string.
    \remarks This macro takes the same arguments as <a href="http://www.cplusplus.com/reference/clibrary/cstdio/printf">printf</a>.

    \}
*/
#define CONSOLE_BRIDGE_logError(fmt, ...) do { \
    LOG_ERROR(fmt, ##__VA_ARGS__); } while(0)

#define CONSOLE_BRIDGE_logWarn(fmt, ...) do { \
    LOG_WARN(fmt, ##__VA_ARGS__); } while(0)

#define CONSOLE_BRIDGE_logInform(fmt, ...) do { \
    LOG_INFO(fmt, ##__VA_ARGS__); } while(0)

#define CONSOLE_BRIDGE_logDebug(fmt, ...) do { \
    LOG_DEBUG(fmt, ##__VA_ARGS__); } while(0)


#define logDebug(FORMAT, ARGS...) do { \
    console_bridge_deprecated(); \
    LOG_DEBUG(FORMAT, ## ARGS); } while(0)

#define logInfo(FORMAT, ARGS...) do { \
    console_bridge_deprecated(); \
    LOG_INFO(FORMAT, ## ARGS); } while(0)
    
#define logWarn(FORMAT, ARGS...) do { \
    console_bridge_deprecated(); \
    LOG_WARN(FORMAT, ## ARGS); } while(0)

#define logError(FORMAT, ARGS...) do { \
    console_bridge_deprecated(); \
    LOG_ERROR(FORMAT, ## ARGS); } while(0)

#define logFatal(FORMAT, ARGS...) do { \
    console_bridge_deprecated(); \
    LOG_FATAL(FORMAT, ## ARGS); } while(0)

#define logInform(FORMAT, ARGS...) do { \
    console_bridge_deprecated(); \
    LOG_INFO(FORMAT, ## ARGS); } while(0)


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
