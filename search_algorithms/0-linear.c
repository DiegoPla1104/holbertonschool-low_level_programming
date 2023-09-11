#include "search_algos.h"

/**
 *linear_search - Searches in an array a value
 *@array: Array to be looked into
 *@size: Size of the array
 *@value: Value to be looked
 *
 *Return: -1 if value not found, Index of value if it is
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned long int iter = 0;

	for (; iter < size; iter++)
	{
		printf("Value checked array[%lu] = [%d]\n", iter, array[iter]);
		if (array[iter] == value)
			return (iter);
	}
	return (-1);
}
