#include "main.h"
/**
 *_strpbrk - Looks for a set of bytes in a string
 *@s: The string to be searched
 *@accept: The set of bytes to be searched for
 *
 *Return: Always 0 (Success)
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int ind;

	while (*s)
	{
		for (ind = 0; accept[ind]; ind++)
		{
			if (*s == accept[ind])
				return (s);
		}
		s++;
	}
	return ('\0');
}
