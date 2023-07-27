#include "main.h"
/**
 * clear_bit - Changes the value of indexth node to 0
 * @n: The indicated bit to be found
 * @index: Index
 *
 * Return: 1 if success or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask <<= index;
	mask = ~mask;
	*n &= mask;
	return (1);
}
