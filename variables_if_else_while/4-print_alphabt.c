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

	for (ipa = 'a' ; ipa <= 'z' ; ipa++)
	{
		if (ipa != 101 && ipa != 113)
		putchar(ipa);
	}
	putchar('\n');
	return (0);
}
