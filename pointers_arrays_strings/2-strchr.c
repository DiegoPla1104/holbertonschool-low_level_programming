#include "main.h"
/**
 *_strchr - Is used to locate a certain character in a string
 *@s: Is the string
 *@c: Is the character to be located
 *
 *Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int lo;

	for (lo = 0; s[lo] != '\0'; lo++)
	{
		if (lo == c)
		{
			return (s);
		}
		if (lo == '\0')
		{
			return ('\0');
		}
	}
return (0);
}
