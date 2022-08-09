#include "main.h"

/**
 * _islower - prints the aphabets
 * @c: argument to be used
 *
 * Return: Always 1 or 0 (Success)
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
