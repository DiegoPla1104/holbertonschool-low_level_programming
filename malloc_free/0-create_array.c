#include "main.h"
#include <stdlib.h>
/**
 *create_array - Creates an array of chars with a specific char in the start
 *@size: Determines the size of the array
 *@c: Is the char to replace the first one
 *Return: 0 if the size is 0 or a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int count;

	if (size == 0)
	{
		return ('\0');
	}
	arr = malloc(size * sizeof(*arr));
	if (arr == NULL)
	{
		return ('\0');
	}
	for (count = 0; count < size; count++)

		arr[count] = c;
	return (arr);
}
