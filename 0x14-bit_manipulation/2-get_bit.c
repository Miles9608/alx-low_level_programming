#include "main.h"

/**
 * get_bit - Assing bit value at a given index
 * @n: long interger
 * @index: unsigned int
 * Return: Return Bit at a given index
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int z = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	z <<= index;

	if (z & n)
		return (1);
	else
		return (0);
}
