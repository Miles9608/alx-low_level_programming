#include <stdio.h>
/**
 * main - main block
 * Description: get a random number and check its
 * Return: 0
 */
int main(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		if (s != 'e' && s != 'q')
		{
			putchar(s);
		}
		s++;
	}
	putchar('\n');
	return (0);
}
