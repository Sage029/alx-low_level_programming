#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int print_last_digit(int);
/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

/**
 * print_last_digit - prints the aphabets
 * @n: The argument to be used
 *
 * Return: The value of abs() (Success)
 */
int print_last_digit(int n)
{
	return (n % 10);
}
