#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @reverse: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _print_rev_recursion(char *reverse)
{
	if (*reverse != '\0')
	{
		_print_rev_recursion(reverse + 1);
		_putchar(*reverse);
	}
}
