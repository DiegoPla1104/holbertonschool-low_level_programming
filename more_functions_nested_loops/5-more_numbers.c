#include "main.h"

/**
 *more_numbers - Prints all numbers from 0 to 14 ten times
 *
 *Return: On Success (0)
 */
void more_numbers(void)
{
	char aepa;
	int a;

	for (a = 1; a <= 10; a++)
	{
		for (aepa = '0'; aepa <= '9' ; aepa++)
		{
			_putchar(aepa);
			for (aepa = '0'; aepa <= '4'; aepa++)
			{
				_putchar(aepa + 10);
			}
		}
		_putchar('\n');
	}
}
