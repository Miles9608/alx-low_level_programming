#include "main.h"

/**
 * create_file - Creating a new file
 *
 * @filename: Parameter description
 *
 * @text_content: Parameter description
 *
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int filePrint, length = 0, filePrintWrite;

	filePrint = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (filePrint == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[length] != '\0')
	{
		length++;
	}

	filePrintWrite = write(filePrint, text_content, length);

	if (filePrintWrite == -1)
	{
		return (-1);
	}
	close(filePrint);
	return (1);
}
