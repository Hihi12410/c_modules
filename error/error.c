#include "error.h"

enum LOGLEVEL 
{
    LOGLEVEL_INFO,
    LOGLEVEL_EXCEPTION,
    LOGLEVEL_ERROR,
    LOGLEVEL_MODULE_FATAL,
    LOGLEVEL_FATAL
};

static char * __log_text[] = {" [INFO] ", "\a [EXCEPTION] ", "\a [ERROR] ", "\a [FATAL MODULE ERROR] ", "\a [FATAL ERROR] "};

static inline void __log(enum LOGLEVEL x, char * str) 
{
    switch (x) {
        case LOGLEVEL_INFO: fprintf(stdout, "%s%s\n", __log_text[0], str); break;
        case LOGLEVEL_EXCEPTION: fprintf(stdout, "%s%s\n", __log_text[1], str);  break;
        case LOGLEVEL_ERROR: fprintf(stdout, "%s%s\n", __log_text[2], str);  break;
        case LOGLEVEL_MODULE_FATAL: fprintf(stdout, "%s%s\n", __log_text[3], str);  break;
        case LOGLEVEL_FATAL: fprintf(stdout, "%s%s\n", __log_text[4], str);  break;
    }
}

static void LOG(enum LOGLEVEL x, char * str) 
{
    __log(x, str);
}

static void ERROR_FATAL(char * str)
{
    __log(LOGLEVEL_FATAL, str);
}

static void ERROR_MODULE_FATAL(char * str) 
{
    __log(LOGLEVEL_MODULE_FATAL, str);
}

