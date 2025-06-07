#include "strings.h"

static inline int __valid_string(char * str) 
{

    for (uintptr_t i = 0; i < STRLEN_MAX; ++i) 
    {
        if (str[i] == 0x0) return 0;
    }
    ERROR_FATAL("String exceeded legal string length!");
    return 1;
}

//String length
static inline uintptr_t __strlen(char * str) 
{
    for (uintptr_t i = 0; i < STRLEN_MAX; ++i) 
    {
        if (str[i] == 0x0) return i+1;
    }
    ERROR_FATAL("String exceeded legal string length!");
    return 0;
}

EXPORT uintptr_t CALL StringLen(char * str)
{
    return __strlen(str);
}
