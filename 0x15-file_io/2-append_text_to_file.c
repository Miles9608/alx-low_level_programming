#include "main.h"

/**
 * append_text_to_file - For appending text
 * @filename: Pointer
 * @text_content: Pointer
 * Return: Programs returns an interger value
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptionOpen, fileDescriptionWrite, length = 0;

	if (filename == NULL)
		return (-1);

	fileDescriptionOpen = open(filename, O_WRONLY | O_APPEND);

	if (fileDescriptionOpen == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	while (text_content[length] != '\0')
	{
		length++;
	}

	fileDescriptionWrite = write(fileDescriptionOpen, text_content, length);

	if (fileDescriptionWrite == -1)
		return (-1);

	close(fileDescriptionOpen);

	return (1);
}
