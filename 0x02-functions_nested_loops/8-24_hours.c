#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void jack_bauer(void);
/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	jack_bauer();
	return (0);
}

/**
 * jack_bauer - prints the time of the day
 *
 */
void jack_bauer(void)
{
	int a, b, c, d;

	a = 0;
	while (a <= 2)
	{
		b = 0;
		while (b <= 3)
		{
			c = 0;
			while (c <= 5)
			{
				d = 0;
				while (d <= 9)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}

}
