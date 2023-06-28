#include "main.h"
/**
 *print_chessboard - Prints a chessboard
 *
 *@a: The chessboard to be printed
 *
 *
 */
void print_chessboard(char (*a)[8])
{
	int indx1, indx2;

	indx1 = 0;
	while (indx1 < 8)
	{
		indx2 = 0;
		while (indx2 < 8)
		{
			_putchar(a[indx1][indx2]);
			indx2++;
		}
		_putchar('\n');
		indx1++;
	}

}
