#include "../includes/dllincludes.h"

enum LOGLEVEL 
{
    LOGLEVEL_INFO,
    LOGLEVEL_EXCEPTION,
    LOGLEVEL_ERROR,
    LOGLEVEL_MODULE_FATAL,
    LOGLEVEL_FATAL
};

EXPORT void CALL LOG(enum LOGLEVEL x, char * str);
EXPORT void CALL ERROR_FATAL(char * str);
EXPORT void CALL ERROR_MODULE_FATAL(char * str);
