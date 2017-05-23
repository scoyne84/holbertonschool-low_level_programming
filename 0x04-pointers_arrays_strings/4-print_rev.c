#include "holberton.h"

/**
 * print_rev - prints given string in reverse.
 * @s: string to be printed.
 * Return: void.
 */

void print_rev(char *s)
{
	int a;
	int b;

	while (s[a])
	{
		a++;
	}
	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
_putchar('\n');
}
