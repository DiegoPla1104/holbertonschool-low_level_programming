#include "main.h"
#include <stdlib.h>
/**
 *binary_to_uint - Converts a binary string to uint
 *@b: String to be converted
 *
 *Return: The converted number or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b != NULL)
	{
		while (b[i] != '\0')
		{
			if (b[i] != '0' && b[i] != '1')
			{
				return (0);
			}
			else
			{
				val <<= 1;
				val += (b[i] - '0');
			}
			i++;
		}
		return (val);
	}
	return (0);
}
