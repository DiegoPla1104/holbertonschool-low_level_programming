#include "main.h"
/**
 *_strstr - Finds a substring
 *@haystack: The string to be searched
 *@needle: The substring to be found
 *
 *Return: Always 0 (Success)
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int ind;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		ind = 0;

		if (haystack[ind] == needle[ind])
		{
			do {
				if (needle[ind + 1] == '\0')
					return (haystack);
				ind++;
			} while (haystack[ind] == needle[ind]);
		}
		haystack++;
	}
	return ('\0');
}
