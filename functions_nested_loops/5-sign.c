#include "main.h"

/**
 *print_sign - Detects if a number is +, 0 or -
 *@n: is a variable
 *Return: On Success (0)
 */
int print_sign(int n)
{
	int aopa = n;

	if (aopa > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (aopa == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
