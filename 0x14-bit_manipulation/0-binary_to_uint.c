#include "main.h"

/**
 * binary_to_uint - Binary convertor to an assigned interger.
 * @b: String to char pointer
 * Return: Number converter
 */

unsigned int binary_to_uint(const char *b)
{
	signed int position = 0, count = 0;


	if (!b)
		return (0);

	while (b[position] != '\0')
	{
		if (b[position] != '0' && b[position] != '1')
		{
			return (0);
		}

		count <<= 1;

		if (b[position] & 1)
		{
			count += 1;
		}
		position += 1;
	}
	return (count);
}
