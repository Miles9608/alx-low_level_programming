#include <stdio.h>
/**
 * get_endianness - Checker
 *
 * Return: void
 */

int get_endianness(void)
{
	int position;

	position = 2;

	if (position & 1)
	{
		return (0);
	}

	return (1);
}
