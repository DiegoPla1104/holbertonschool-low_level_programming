#include "main.h"

/**
 *more_numbers - Prints all numbers from 0 to 14 ten times
 *
 *Return: On Success (0)
 */
void print_alphabet_x10(void)
{
	char aepa;
	int a;

	for (a = 1; a <= 10; a++)
	{
		for (aepa = '0'; aepa <= '14' ; aepa++)
		{
			_putchar(aepa);
		}
		_putchar('\n');
	}
}
