#include <stdio.h>
#include "main.h"

/* print_alphabet prototype */
void print_alphabet(void);
/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints the aphabets
 */
void print_alphabet(void)
{
	int a;

	a = 97;
	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	putchar('\n');
}
