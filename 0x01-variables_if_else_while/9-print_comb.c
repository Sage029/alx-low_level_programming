#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	a = 0
	while (a <= 9)
	{
		putchar(a);
		putchar(",");
		putchar(" ");
		a = a + 1;
	}
	putchar("\n");
	return (0);
}
