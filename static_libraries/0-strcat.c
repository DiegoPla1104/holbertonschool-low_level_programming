#include "main.h"
/**
 *_strcat - Copies the content of a string to the end of another
 *@dest: A string
 *@src: The string that must be added to dest
 *Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	int e = 0;
	int u = 0;


	while (dest[e] != '\0')
		e++;

	while (src[u] != '\0')
	{
		dest[e] = src[u];
		e++;
		u++;
	}
	dest[e] = '\0';
	return (dest);
}
