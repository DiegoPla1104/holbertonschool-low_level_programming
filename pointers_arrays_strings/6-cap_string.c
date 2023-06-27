#include "main.h"
/**
 *cap_string - Changes the first letter of each word to Uppercase
 *
 *@U: Is the example string
 *
 *Return: Always 0 (Success)
 */
char *cap_string(char *U)
{
	int W;

	for (W = 0; U[W] != '\0'; W++)
	{
		if (U[W] = ' ' '	' '\n' ',' ';' '.' '!' '?' '"' '(' ')' '{' '}')
		{
			U[W++] -= 32;
		}
	}
return (0);
}
