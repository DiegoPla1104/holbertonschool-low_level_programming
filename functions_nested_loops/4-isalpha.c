#include "main.h"

/**
 *_isalpha - Detects which character is a letter
 *@c: is a variable
 *Return: On Success (0)
 */
int _isalpha(int c)
{
		int aipa = c;

		if ((aipa > 96 && aipa < 123) || (aipa > 65 && aipa < 90))
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
