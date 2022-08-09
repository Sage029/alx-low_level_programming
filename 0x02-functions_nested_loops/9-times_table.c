#include "main.h"

/**
 * times_table - prints the times table
 */
void times_table(void)
{
	int a, b, c;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			c = a * b;
			_putchar(c + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if (b == 9)
			{
				_putchar('$');
				_putchar('\n');
			}
			b++;
		}
		a++;
	}
}
