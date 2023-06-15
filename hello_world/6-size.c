#include <stdio.h>
/**
 *main - a string is printed using printf
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;
	printf("%i\n", sizeof(charType));
	printf("%i\n", sizeof(intType));
	printf("%i\n", sizeof(longintType));
	printf("%i\n", sizeof(longlongintType));
	printf("%i\n", sizeof(floatType));
return (0);
}
