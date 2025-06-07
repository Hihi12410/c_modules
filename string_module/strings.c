#include "strings.h"

//Maximum string length
#define STRLEN_MAX ULONG_LONG_MAX

//Is string NULL terminated?
static inline int __valid_string(char * str) 
{

    for (uintptr_t i = 0; i < STRLEN_MAX; ++i) 
    {
        if (str[i] == 0x0) return 0;
    }
    fprintf(stderr, "String exceeded maximum string length!");
    return 1;
}

//String length
static inline uintptr_t __strlen(char * str) 
{
    for (uintptr_t i = 0; i <)
}


