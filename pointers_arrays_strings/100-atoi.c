#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int unu = 0;
	int wii = 1;
	int swi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			wii *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			swi = 1;
			unu = (unu * 10) + (s[c] - '0');
			c++;
		}

		if (swi == 1)
		{
			break;
		}

		c++;
	}

	unu *= wii;
	return (unu);
}

