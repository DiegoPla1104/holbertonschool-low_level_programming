#include "main.h"
/**
 * get_bit - Returns the nth bit
 * @n: The indicated bit to be found
 * @index: Index
 *
 * Return: The value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask <<= index;
	return (n & mask) ? 1 : 0;
}
