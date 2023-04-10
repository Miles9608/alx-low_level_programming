#include "main.h"
/**
 * clear_bit -  Clear_bit assigns the value of a bit to zero (0) at a given index
 * @n: long interger
 * @index: unsigned interger
 * Return: Returnts the value 1 if works -1 on compilatio failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s = 1 << index;

		if (index < sizeof(n) * 8)
		{
			*n = (*n & ~s);
			return (1);
		}
		return (-1);
}
