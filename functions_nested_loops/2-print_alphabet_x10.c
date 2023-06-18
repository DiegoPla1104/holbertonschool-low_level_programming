#include "main.h"

/**
 *print_alphabet_x10 - Prints the alphabet ten times
 *
 *Return: On Success (0)
 */
void print_alphabet_x10(void)
{
	char aepa;
	int a;

	for (a = 1; a <= 10; a++)
	{
		for (aepa = 'a'; aepa <= 'z' ; aepa++)
		{
			_putchar(aepa);
		}
		_putchar('\n');
	}
}
