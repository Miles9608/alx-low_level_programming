#include "main.h"
/**
 * flip_bits - Number of bits you would needed to flip.
 * @n: long interger
 * @m: unsigned interger
 * Return: Returns the value 1 if works -1 on program compilation results failure
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int s = 0, index;

	index = (n ^ m);

	while (index > 0)
	{
		if (index & 1)
		{
			s++;
		}
		index >>= 1;
	}
	return (s);
}
