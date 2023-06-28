#include "main.h"
/**
*comp - recursión
*@n: int
*@i: int
*
*Return: int
*/
int comp(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (comp(n, i + 1));
}
#include "main.h"
/**
*is_prime_number - recursión
*@n: int
*
*Return: int
*/
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	else if (comp(n, 1) < 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
