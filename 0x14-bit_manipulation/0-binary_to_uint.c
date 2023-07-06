#include "main.h"

/**
 * binary_to_uint - convertind a binanary number to>
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int miles, base2;

	if (!b)
		return (0);

	ui = 0;

	for (miles = 0; b[miles] != '\0'; miles++)
		;

	for (miles--, base2 = 1; miles >= 0; miles--, base2 *= 2)
	{
		if (b[miles] != '0' && b[miles] != '1')
		{
			return (0);
		}

		if (b[miles] & 1)
		{
			ui += base2;
		}
	}

	return (ui);
}
