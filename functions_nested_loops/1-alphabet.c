#include "main.h"

/**
 *printeado - Prints the alphabet
 *
 *Return: On Success (0)
 */
void print_alphabet(void)
{
	char aapa;

	for (aapa = 'a'; aapa <= 'z' ; aapa++)
	{
		_putchar(aapa);
	}
	_putchar('\n');
}
