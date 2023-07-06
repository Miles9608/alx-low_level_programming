#include "main.h"

/**
 * clear_bit -  Intialize the value of a bit to 0 at a selected index
 *
 * @n: long int
 *
 * @index: unsigned int
 *
 * Return: 1 When Succeful -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int miles = 1 << index;

		if (index < sizeof(n) * 8)
		{
			*n = (*n & ~miles);
			return (1);
		}

		return (-1);
}
