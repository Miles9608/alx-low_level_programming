#include "main.h"

/**
 * read_textfile - it prints the processed text file.
 *
 * @filename: reader pointer
 *
 * @letters: size_t type
 *
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filePrint;
	ssize_t filePrintRead, filePrintWrite, filePrintClose;
	char *LB;

	if (filename == NULL)
		return (0);

	LB = malloc(sizeof(char) * letters);

	if (LB == NULL)
		return (-1);

	filePrint = open(filename, O_RDONLY);

	if (filePrint == -1)
		return (0);

	filePrintRead = read(filePrint, LB, letters);

	if (filePrintRead == -1)
		return (-1);

	filePrintWrite = write(STDOUT_FILENO, LB, filePrintRead);

	if (filePrintWrite == -1)
		return (-1);
	filePrintClose = close(filePrint);

	if (filePrintClose == -1)
		return (-1);

	return (filePrintRead);
}
