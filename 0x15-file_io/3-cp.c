#include "main.h"

/**
 * main - to copyfiles
 *
 * @argc: int
 *
 * @argv: double pointer
 *
 * Return: file duplicate
 */

int main(int argc, char **argv)
{
	int fileDescrip, fileDescrip2, filecheck;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fileDescrip = open(argv[1], O_RDONLY);
	if (fileDescrip == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fileDescrip2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileDescrip2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((filecheck = read(fileDescrip, buffer, 1024)) > 0)
	{
		if (filecheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		filecheck = write(fileDescrip2, buffer, filecheck);
		if (filecheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (filecheck == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fileDescrip) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fileDescrip %d\n", fileDescrip), exit(100);
	if (close(fileDescrip2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fileDescrip %d\n", fileDescrip2), exit(100);

	return (0);
}
