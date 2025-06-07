#include <stdio.h>
#include <stdlib.h>

#define EXPORT __declspec(dllexport)
#define CALL __cdecl

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
