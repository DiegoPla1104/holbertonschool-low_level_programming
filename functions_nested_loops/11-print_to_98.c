#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - Prints the alphabet ten times
 *@n: is a number
 *Return: On Success (0)
 */
void print_to_98(int n)
{
	int uupa;

	if (n < 98)
	{
		for (uupa = n; uupa <= 98; uupa++)
		{
			if (n < 98)

			printf("%d, ", uupa);

			if (n == 98)

			printf("%d\n", uupa);
		}
	}
	else if (n > 98)
	{
		for (uupa = n; uupa > 98; uupa--)
		{
			if (n > 98)

			printf("%d, ", uupa);

			if (n == 98)

			printf("%d\n", uupa);

		}
	}
}
