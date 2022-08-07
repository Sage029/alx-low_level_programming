#include <stdio.h>
#include "main.h"

/* _isalpha prototype */
int _isalpha(int c);
/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * _isalpha - prints the aphabets
 * @c: argument to be used
 *
 * Return: Always 1 or 0 (Success)
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 64) && (c <= 90)))
		return (1);
	return (0);
}
