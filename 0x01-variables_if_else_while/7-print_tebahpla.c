#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all the lowercas alphabet in reverse
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char d = 'z';

	while (d >= 'a')
	{
		putchar(d);
		d++;
	}

	putchar('\n');
	return (0);
}
