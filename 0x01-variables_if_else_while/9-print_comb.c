#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: a program that prints all possible combinations
 * of single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int f = 0;

	while (f < 10)
	{
		putchar(48 + f);
		if (f != 9)
		{
			putchar(',');
			putchar(' ');
		}
		f++;
	}
	putchar('\n');
	return (0);
}
