i#include "main.h"

/**
 * jack_bauer - prints the time of the day
 *
 */
void jack_bauer(void)
{
	int a, c, d;

	a = 0;
	while (a <= 23)
	{
		c = 0;
		while (c <= 5)
		{
			d = 0;
			while (d <= 9)
			{
				if (a < 10 )
					_putchar('0');
				else
					_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
				_putchar(':');
				_putchar(c + '0');
				_putchar(d + '0');
				_putchar('\n');
				d++;
			}
			c++;
		}
		a++;
	}

}
