#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59.
 *
 * Return: void.
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a <= 23; a++)
	{
		int c = a / 10;
		int d = a % 10;

		for (b = 0; b <= 59; b++)
		{
			int x = b / 10;
			int y = b % 10;

			_putchar((c) + '0');
			_putchar((d) + '0');
			_putchar(':');
			_putchar((x) + '0');
			_putchar((y) + '0');
			_putchar('\n');
		}
	}
}
