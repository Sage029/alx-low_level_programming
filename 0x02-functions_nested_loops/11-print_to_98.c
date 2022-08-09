#include <stdio.h>

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
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		while (n >= 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
}
