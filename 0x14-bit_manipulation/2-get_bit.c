#include "main.h"

/**
 * get_bit - returns bit value at a given
 * index.
 * @n: unsigned long interger input.
 * @index: bit index.
 *
 * Return: bit value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int miles;

	if (n == 0 && index < 64)
		return (0);

	for (miles = 0; miles <= 63; n >>= 1, miles++)
	{
		if (index == miles)
		{
			return (n & 1);
		}
	}

	return (-1);
}
