#include "main.h"
/**
 * print_binary - Prints the bineary representation of a number
 * @n: Number to be converted
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
