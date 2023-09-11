#include "search_algos.h"

/**
 *binary_search - Searches in an array a value
 *@array: Array to be looked into
 *@size: Size of the array
 *@value: Value to be looked
 *
 *Return: -1 if value not found, Index of value if it is
 */
int binary_search(int *array, size_t size, int value)
{
	size_t iter = 0, iter2 = 0, end = size - 1;

	if (!array)
	{
		printf("Found at index: -1");
		return (-1);
	}
	for (iter = 0, end = size - 1; end >= iter;)
	{
		printf("Searching in array: ");
		for (iter2 = iter; iter2 < end; iter2++)
			printf("%d, ", array[iter2]);

		printf("%d\n", array[iter2]);

		iter2 = iter + (end - iter) / 2;

		if (array[iter2] == value)
			return (iter2);

		else if (array[iter2] > value)
			end = iter2 - 1;

		else
			iter = iter2 + 1;
	}
	return (-1);
}
