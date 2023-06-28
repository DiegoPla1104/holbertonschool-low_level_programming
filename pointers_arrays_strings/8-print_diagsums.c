#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - Prints the result of adding two diagonals
 *
 *@a: The matrix of integers
 *
 *@size: The size of the matrix
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int ind, sum1 = 0, sum2 = 0;

	for (ind = 0; ind < size; ind++)
	{
		sum1 += a[ind];
		a += size;
	}

	a -= size;

	for (ind = 0; ind < size; ind++)
	{
		sum2 += a[ind];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
