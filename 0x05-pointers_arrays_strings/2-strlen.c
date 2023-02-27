#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 *
 * @q: this is the input string
 *
 * Return: Lenngth of the string
 */
int _strlen(char *q)
{
	int number;

	for (number = 0; q[number] != '\0' ; number++)
		;
	return (number);
}
