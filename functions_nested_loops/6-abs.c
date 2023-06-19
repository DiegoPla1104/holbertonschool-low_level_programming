#include "main.h"
#include <stdio.h>

/**
 *_abs - Detects the absolute value of an integer
 *@n: number
 *Return: On Success (0)
 */
int _abs(int n)
{
	if (n >= 0)
	{
		_putchar(n);
	}
	else if (n < 0)
	{
		n = (n * -1);
		_putchar(n);
	}
	return (0);
}
