#include "main.h"
/**
 *_strncpy - copies from one string to another
 *@dest: Destiny of the copy
 *@src: Source oof the copy
 *@n: Limit of the copy
 *Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	if (i < n)
	{
		src[i++] = '\0';
		i++;
	}
	return (dest);
}
