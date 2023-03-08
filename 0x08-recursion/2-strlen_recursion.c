#include "main.h"

/**
 * _strlen_recursion - Returns Length of String
 * @legthOfAString: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *legthOfAString)
{
	if (*legthOfAString != '\0')
	{
		return (1 + _strlen_recursion(legthOfAString + 1));
	}
	return (0);
}
