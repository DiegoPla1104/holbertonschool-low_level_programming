#include "function_pointers.h"
/**
 *array_iterator - Takes a function and runs it on each element of an array
 *@array: Is the array to be examined
 *@size: Determines the size of said array
 *@action: Is a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int count = 0;

	if (array != NULL && action != NULL)
	{
		for (; count < size; count++)
		{
			action(array[count]);
		}
	}
}
