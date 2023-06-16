#include <stdio.h>
/**
 * main - Alphabet
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int ipa;

	for (ipa = '0' ; ipa <= '9' ; ipa++)
	{
		putchar(ipa);
		if (ipa != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
