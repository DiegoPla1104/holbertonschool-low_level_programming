#include "main.h"
/**
 *read_textfile - Reads and prints a file to the POSIX standard output.
 *@filename: Is the file that will be read and printed.
 *@letters: is the number of letters that should be read and printed.
 *
 *Return: 0 if failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int stor = 0, stor1 = 0;
	char buffer[10000];

	if (filename == NULL)
	{
		return (0);
	}
	else
	{
		stor = open(filename, O_RDONLY);
		if (stor == -1)
		{
			return (0);
		}
		else
		{
			stor1 = read(stor, buffer, letters);
		}
		if (stor == -1)
		{
			return (0);
		}
		else
		{
			write(1, buffer, stor1);
			close(stor);
		}
	}
	return (stor1);
}
