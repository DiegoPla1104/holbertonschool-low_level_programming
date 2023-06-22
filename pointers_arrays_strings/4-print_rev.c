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
	for (; u >= 0; u--)
	{
		_putchar(s[u]);
	}
}
