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

	for (ipa = 'a' ; ipa <= 'z' ; ipa++)
	{
		putchar(ipa);
	}
	for (opa = 'A' ; opa <= 'Z' ; opa++)
	{
		putchar(opa);
	}
	putchar('\n');
	return (0);
}
