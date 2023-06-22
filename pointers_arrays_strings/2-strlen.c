#include "main.h"

/**
 *_strlen - Is used to count the length of a string
 *@s: Is points to the start of the string
 *Return: Alway 0 (Success)
 */
int _strlen(char *s)
{
int aapa = 0;

	while (s[aapa] != '\0')
	{
		aapa++;
	}
	return (aapa);
}
