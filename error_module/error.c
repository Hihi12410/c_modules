#include "error.h"



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

EXPORT void CALL LOG(enum LOGLEVEL x, char * str) 
{
    __log(x, str);
}

EXPORT void CALL ERROR_FATAL(char * str)
{
    __log(LOGLEVEL_FATAL, str);
}

EXPORT void CALL ERROR_MODULE_FATAL(char * str) 
{
    __log(LOGLEVEL_MODULE_FATAL, str);
}

