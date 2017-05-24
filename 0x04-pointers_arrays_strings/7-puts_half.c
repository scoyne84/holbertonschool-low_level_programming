#include "holberton.h"

/**
 * puts_half - prints the last half of the string
 * @str: string to be printed
 * Return: void.
 */
void puts_half(char *str)
{
	int x = 0;
	int y;

	while (str[x])
	{
		x++;
		if (x % 2 == 0)
		{
			y = (x / 2);
		}
		else
		{
			y = (x / 2 + 1);
		}
	}
	while (str[y])
	{
		_putchar(str[y]);
		y++;
	}
	_putchar(str[y]);
	_putchar('\n');
}

