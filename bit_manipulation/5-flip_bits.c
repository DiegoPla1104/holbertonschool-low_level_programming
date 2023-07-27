#include "main.h"

/**
 *flip_bits - Search number of bits you would need to flip to get from one numb
 *@n: number
 *@m: chang number
 *Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flag = n ^ m;
	unsigned long int count = 0;

	while (flag > 0)
	{
		if (flag & 1)
		{
			count++;
		}
		flag >>= 1;
	}
	return (count);
}
