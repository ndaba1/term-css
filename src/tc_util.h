
#if !defined(TC_UTIL)
#define TC_UTIL

#define tc_clear_screen() puts("\x1B[23")

#if _WIN32
#include <Windows.h>

void tc_get_cols_rows(int *cols, int *rows)
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

    *cols = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    *rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
}

#elif __LINUX__
#include <sys/ioctl.h>

void tc_get_cols_rows(int *cols, int *rows)
{
    struct winsize size;
    ioctl(1, TIOCGWINSZ, &size);
    *cols = size.ws_col;
    *rows = size.ws_row;
}

#endif // _WIN32
#endif // TC_UTIL
