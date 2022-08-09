#include "main.h"

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
	else
		return (0);
}
