#include "main.h"

/**
 * set_bit - Assing bit value to 1
 * @n: long interger
 * @index: unsigned interger
 * Return: Program will return 1 if works -1 on unsuccesful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
