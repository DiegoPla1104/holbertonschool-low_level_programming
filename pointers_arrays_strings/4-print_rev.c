#include "main.h"

/**
 *print_rev - Prints a string in reverse
 *@s: Is the pointer of example
 */
void print_rev(char *s)
{
	int u = 0;

	while (s[u] != '\0')
	{
		u++;
	}
	while ( u >= 0)
	{
		_putchar(s[u]);
		u--;

	}
	_putchar('\n');
}
