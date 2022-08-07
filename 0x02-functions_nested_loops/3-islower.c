#include <stdio.h>
#include "main.h"

/* _islower prototype */
int _islower(int c);
/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * _islower - prints the aphabets
 * @c: argument to be used
 *
 * Return: Always 1 or 0 (Success)
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	return (0);
}
