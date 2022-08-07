#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int add(int, int);
/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}

/**
 * add - prints the addition of two ints
 * @n: The argument to be used
 * @m: The other argument
 * Return: The value of abs() (Success)
 */
int add(int n, int m)
{
	return (m + n);
}
