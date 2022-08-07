#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_to_98(int n);
/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);
}

/**
 * print_to_98 - prints the addition of two ints
 * @n: The argument to be used
 *
 * Return: The value of abs() (Success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
}
