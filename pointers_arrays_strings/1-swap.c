#include "main.h"

/**
 * swap_int - Exchanges the values of two integers with the help of temp
 *@a: is a number
 *@b: is anoter number
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
