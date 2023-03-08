#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @miles: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *miles)
{
	if (*miles == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*miles);
	_puts_recursion(miles + 1);
}
