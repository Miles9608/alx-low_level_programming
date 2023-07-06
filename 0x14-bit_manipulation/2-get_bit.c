#include "main.h"

/**
 * get_bit - Bit value at a given index
 *
 * @n: long interger
 *
 * @index: unsigned interger
 *
 * Return: Bit at a given index
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int miles = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	miles <<= index;

	if (miles & n)
		return (1);
	else
		return (0);
}
