#if !defined(TC_CURSOR)
#define TC_CURSOR

#define tc_move_cursor(X, Y) printf("\033[%d;%dH", Y, X)

#endif // TC_CURSOR
