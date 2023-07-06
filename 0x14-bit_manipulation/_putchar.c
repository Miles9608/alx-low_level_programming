#include <unistd.h>

/**
 * _putchar - character c is written to stdout
 * @c: The character to be displayed
 *
 * Return: When successful 1.
 * On failure, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
