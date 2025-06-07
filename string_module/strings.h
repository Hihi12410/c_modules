#include <stdint.h>
#include <limits.h>
#include "../includes/dllincludes.h"
#include "../error_module/error.h"

//Maximum string length
#define STRLEN_MAX ULONG_LONG_MAX

//Is string NULL terminated?
EXPORT uintptr_t CALL StringLen(char * str);

