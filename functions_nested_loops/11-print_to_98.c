#include "main.h"

/**
 *print_to_98 - Prints the alphabet ten times
 *@n: is a number
 *Return: On Success (0)
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		if (n < 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(n);
		}
	}
	for (; n >= 98; n--)
	{
		if (n > 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(n);
		}
	}
}
