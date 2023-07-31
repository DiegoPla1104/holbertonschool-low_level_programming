#include "main.h"
/**
 *create_file - Creates a file with rw permissions
 *@filename: The name of the file.
 *@text_content: Is the content of the file.
 *
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int stor = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		stor = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
		if (stor != -1)
		{
			if (text_content != NULL)
			{
				write(stor, text_content, strlen(text_content));
			}
			else
			{
				write(stor, "", 1);
			}
			close(stor);
		}
		else
		{
			if (text_content != NULL)
			{
				write(stor, text_content, strlen(text_content));
			}
			else
			{
				write(stor, "", 1);
			}
			close(stor);
		}
	}
	return (1);
}
