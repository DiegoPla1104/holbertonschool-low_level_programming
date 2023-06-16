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

	for (ipa = 'z' ; ipa <= 'a' ; ipa--)
	{
		putchar(ipa);
	}
	putchar('\n');
	return (0);
}
