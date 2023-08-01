#include "main.h"
/**
 *append_text_to_file - Adds text to te end of a file
 *@filename: File to add text to
 *@text_content: Text to be added to file
 *
 *Return: 1 if Success, -1 if Error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int det = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		det = open(filename, O_RDWR | O_APPEND);
		if (det == -1)
		{
			return (-1);
		}
		else
		{
			write(det, text_content, strlen(text_content));
		}
	}
	return (1);
}
