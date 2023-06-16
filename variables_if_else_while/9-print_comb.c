#include <stdio.h>
/**
 * main - Alphabet
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char ipa;

	for (ipa = '0' ; ipa <= '9' ; ipa++)
	{
		putchar(ipa);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
