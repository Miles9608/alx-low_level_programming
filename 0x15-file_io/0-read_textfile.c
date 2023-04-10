#include "main.h"
/**
 * read_textfile - Reads a textfile and gives output of the results.
 * @filename: Read file pointer
 * @letters: size_t type
 * Return: programs returns 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filePrint;
	ssize_t filePrintRead, filePrintWrite, filePrintClose;
	char *lineBuffer;

	if (filename == NULL)
		return (0);

	lineBuffer = malloc(sizeof(char) * letters);

	if (lineBuffer == NULL)
		return (-1);

	filePrint = open(filename, O_RDONLY);

	if (filePrint == -1)
		return (0);

	filePrintRead = read(filePrint, lineBuffer, letters);

	if (filePrintRead == -1)
		return (-1);

	filePrintWrite = write(STDOUT_FILENO, lineBuffer, filePrintRead);

	if (filePrintWrite == -1)
		return (-1);
	filePrintClose = close(filePrint);

	if (filePrintClose == -1)
		return (-1);

	return (filePrintRead);
}
