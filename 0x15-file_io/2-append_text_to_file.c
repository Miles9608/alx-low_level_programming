#include "main.h"

/**
 * append_text_to_file - Appending of text happens at the end of the line.
 *
 * @filename: Pointer for const char
 *
 * @text_content: Pointer for char.
 *
 * Return: int
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescripOpen, fileDescripWrite, length = 0;

	if (filename == NULL)
		return (-1);

	fileDescripOpen = open(filename, O_WRONLY | O_APPEND);

	if (fileDescripOpen == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	while (text_content[length] != '\0')
	{
		length++;
	}

	fileDescripWrite = write(fileDescripOpen, text_content, length);

	if (fileDescripWrite == -1)
		return (-1);

	close(fileDescripOpen);

	return (1);
}
