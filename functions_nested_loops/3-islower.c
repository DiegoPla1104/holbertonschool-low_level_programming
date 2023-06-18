#include "main.h"

/**
 *_islower - Detects which letter is lowercase
 *@c: is a variable
 *Return: On Success (0)
 */
int _islower(int c)
{
		int aipa = c;

		if (aipa > 96 && aipa < 123)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
