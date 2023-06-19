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
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	return (0);
}
