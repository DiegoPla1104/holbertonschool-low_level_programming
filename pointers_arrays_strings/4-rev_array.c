#include "main.h"
/**
 *reverse_array - Reverses an array
 *
 *@n: Is the number of elements in the array
 *
 *@a: The array to be reversed
 *
 *Return: Void
 */
void reverse_array(int *a, int n)
{
	int e;
	int w;

	for (e = n - 1; e >= n; e--)
	{
		w = a[n - 1 - e];
		a[n - 1 - e] = a[e];
		a[e] = w;
	}
}
