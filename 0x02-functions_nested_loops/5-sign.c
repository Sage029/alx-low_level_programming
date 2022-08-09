#include "main.h"

/**
 * print_sign - prints the aphabets
 * @n: argument to be used
 *
 * Return: Always 1 or 0 or -1 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	return (0);
}
