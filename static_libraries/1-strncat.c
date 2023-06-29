#include "main.h"
/**
 *_strncat - Copies the content of a string to the end of another
 *@dest: A string
 *@src: The string that must be added to dest
 *@n: The limit of bytes to copy from src
 *Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int e = 0;
	int u = 0;


	while (dest[e] != '\0')
		e++;

	for (u = 0; u < n && src[u] != '\0';)
	{
		dest[e] = src[u];
		e++;
		u++;
	}
	dest[e] = '\0';
	return (dest);
}
