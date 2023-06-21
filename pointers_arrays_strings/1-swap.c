#include "main.h"

/**
 * swap_int - Exchanges the values of two integers
 *@a: is a number
 *@b: is anoter number
 */

void swap_int(int *a, int *b)
{

	*a = 98;
	*b = 42;

	*a = &b;
	*b = &a;
}
