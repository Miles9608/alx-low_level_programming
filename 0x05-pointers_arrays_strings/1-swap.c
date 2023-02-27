#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @f: this is the first entry
 * @x: this is the second entry
 *
 *
 */
void swap_int(int *f, int *x)
{
	int new;

	new = *f;
	*f = *x;
	*x = new;
}
