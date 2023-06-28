#include "main.h"
/**
 *_pow_recursion - Returns the factorial of a given number
 *@x: The number to be raised
 *@y: The value of the rise
 *Return: The end result of x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
