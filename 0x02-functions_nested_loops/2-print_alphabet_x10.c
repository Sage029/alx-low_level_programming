#include <stdio.h>
#include "main.h"

/* print_alphabet_x10 prototype */
void print_alphabet_x10(void);
/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - prints the aphabets
 */
void print_alphabet_x10(void)
{
	int a;

	for (int i = 0; i < 10; i++)
	{
		a = 97;
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
