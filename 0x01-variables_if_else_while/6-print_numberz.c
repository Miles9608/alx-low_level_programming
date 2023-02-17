#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit number of base 10
 * starting from 0, followed by new  line.
 * Return: 0
 */
int main(void)
{
	int b = 0;

	while (b < 10)
	{
		putchar(48 + b);
		b++;
	}

	putchar('\n');
	return (0);
}
