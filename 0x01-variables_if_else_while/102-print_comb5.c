#include <stdio.h>
#include <stdlib.h>
/**
 * main -main block
 * Description: A program that prints all possible combinations
 * of two two-digits numbers.
 * The numbers should range from 0 to 99.
 * The two numbers should be seperated by a space
 * All numbers should be printed with two digits.
 * 1 should be printed as 01.
 * The combination of numbers must be seperated by comma
 * followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00, 01 and 01, 00 are considered as the same combination,
 * of the numbers 0 and 1
 * Return: 0
 */
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (c != d && d != e && e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);

					if (c + d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

				c++;
			}
			d++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
