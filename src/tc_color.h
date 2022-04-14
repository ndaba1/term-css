#include <stdio.h>

#if !defined(TC_COLOR)
#define TC_COLOR

#define TC_NORM "\x1B[0m"
#define TC_RED "\x1B[1;31m"
#define TC_GREEN "\x1B[1;32m"
#define TC_YELLOW "\x1B[1;33m"
#define TC_BLUE "\x1B[1;34m"
#define TC_MAGENTA "\x1B[1;35m"
#define TC_CYAN "\x1B[1;36m"
#define TC_WHITE "\x1B[1;37m"

#define TC_B_NORM "\x1B[0m"
#define TC_B_RED "\x1B[0;31m"
#define TC_B_GREEN "\x1B[0;32m"
#define TC_B_YELLOW "\x1B[0;33m"
#define TC_B_BLUE "\x1B[0;34m"
#define TC_B_MAGENTA "\x1B[0;35m"
#define TC_B_CYAN "\x1B[0;36m"
#define TC_B_WHITE "\x1B[0;37m"

#define TC_BG_NORM "\x1B[40m"
#define TC_BG_RED "\x1B[41m"
#define TC_BG_GREEN "\x1B[42m"
#define TC_BG_YELLOW "\x1B[43m"
#define TC_BG_BLUE "\x1B[44m"
#define TC_BG_MAGENTA "\x1B[45m"
#define TC_BG_CYAN "\x1B[46m"
#define TC_BG_WHITE "\x1B[47m"

void color_display(char *args, char *color)
{
    printf("%s%s%s", color, args, TC_NORM);
}

#endif // TC_COLOR
