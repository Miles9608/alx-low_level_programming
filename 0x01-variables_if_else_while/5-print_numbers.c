#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit number of base 10
 * starting from 0, followed by newline.
 * Return: 0
 */
int main(void)
{
	char z = '0';

	while (z <= '9')
	{
		putchar(z);
		z++;
	}
	putchar('\n');
	return (0);
}
