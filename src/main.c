#include <stdio.h>
#include <string.h>
#include "tc_color.h"
#include "tc_util.h"
#include "tc_cursor.h"

int main(int argc, char *argv)
{
	int cols, rows;
	tc_get_cols_rows(&cols, &rows);

	tc_move_cursor((cols - 12) / 2, rows / 2);
	color_display("Hello world", TC_RED);

	return 0;
}
