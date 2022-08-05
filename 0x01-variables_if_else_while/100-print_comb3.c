#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	a = 0;
	b = 1;
	while (a <= 9)
	{
		while (b <= 9)
		{
			if ((a != b) || (a < b))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(',');
				putchar(' ');
			}
			b = b + 1;
		}
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
