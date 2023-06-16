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
	char opa;

	for (ipa = '0' ; ipa <= '9' ; ipa++)
	{
		putchar(ipa);
	}
	for (opa = 'a' ; opa <= 'f' ; opa++)
	{
		putchar(opa);
	}
	putchar('\n');
	return (0);
}
