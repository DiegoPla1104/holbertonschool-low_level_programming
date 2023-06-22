#include "main.h"

/**
 *_puts - Is used as a function that prints the string
 *
 * @str: is a string
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
