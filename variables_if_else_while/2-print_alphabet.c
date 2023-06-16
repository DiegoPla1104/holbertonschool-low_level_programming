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
		putchar(ipa);
	}
	putchar('\n');
	/*ipa = 'a';
	while (ipa <= 'z')
	{
		putchar(ipa);
		ipa ++;
	}
	putchar('\n');*/
	return (0);
}
