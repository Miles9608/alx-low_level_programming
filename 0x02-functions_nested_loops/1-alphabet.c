#include "main.h"

/**
 * main - main block
 * Description: A function that prints al[phabet
 * in lowercase, followed by a new line.
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
}
