#include "holberton.h"

/**
 * puts2 - prints every other element.
 * @str: string to be input
 * Return: void.
 */
void puts2(char *str)
{
	int x;

	while (str[x])
	{
		if(x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
