#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _abs(int);
/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}

/**
 * _abs - prints the aphabets
 * @n: The argument to be used
 *
 * Return: The value of abs() (Success)
 */
int _abs(int n)
{
	return (abs(n));
}
