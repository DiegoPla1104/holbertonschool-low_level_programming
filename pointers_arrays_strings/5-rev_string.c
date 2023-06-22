#include "main.h"

/**
 *rev_string - Prints a string in reverse
 *@s: Is the pointer of example
 */
void rev_string(char *s)
{
	int u = 0;

	while (s[u] != '\0')
	{
		_putchar(s[u]);
		u++;
	}
	_putchar('\n');
	while (s[u] != '\0')
	{
		u++;
	}
	for (; u >= 0; u--)
	{
		_putchar('\n');
	}
}
