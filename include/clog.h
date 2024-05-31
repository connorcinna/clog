#ifndef CLOG_H
#define CLOG_H

#ifdef __cplusplus
extern "C"{
#endif

typedef enum log_severity
{
    INFO,
    WARN,
   	ERROR, 
    FATAL,
    DEFAULT
} log_severity_t;

#define clog(log_severity, ...) debug_log(log_severity, __FILE__, __LINE__, __VA_ARGS__)

//initializes the log path for this module
void init_log_path(void);

//return the current local time for printing to the console
char* log_prefix(char const* filename, int line);

//Generic log function, writes to log file
void debug_log(log_severity_t level, char const* filename, int line, char* msg, ...);

//When logging to stdout, set the color ofthe log message depending on the log level
void set_print_color(log_severity_t level);
#ifdef __cplusplus
}
#endif

#endif
