#include "holberton.h"

/**
 * main - check the code for Holberton School students.
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
