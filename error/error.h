#include <stdio.h>
#include <stdlib.h>

enum LOGLEVEL;

static void LOG(enum LOGLEVEL x, char * str);
static void ERROR_FATAL(char * str);
static void ERROR_MODULE_FATAL(char * str);
