#include "holberton.h"

/**
 * _puts - prints given string.
 * @str: string to be printed.
 * Return: void.
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
