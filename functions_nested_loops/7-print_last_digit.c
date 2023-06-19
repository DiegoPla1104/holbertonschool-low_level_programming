#include "main.h"

/**
 *print_last_digit - Prints the last digit of a number
 *@r: is a variable
 *Return: On Success (0)
 */
int print_last_digit(int r)
{
	int aepa = (r % 10);

	if (aepa < 0)
	{
		aepa = aepa * -1;
	}

	_putchar(aepa + '0');

	return (aepa);
}
