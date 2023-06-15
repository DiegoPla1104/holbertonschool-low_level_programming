#include <stdio.h>
#include <unistd.h>
/**
 *main - a string is printed using write
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	write(3, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
