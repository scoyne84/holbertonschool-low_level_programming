#include "holberton.h"

/**
 * print_sign - prints positive or negative sign for integer being tested.
 * @n: integer to be tested
 * Return: Always result.
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar ('+');
	}
	else if (n < 0)
	{
		result = -1;
		_putchar ('-');
	}
	else
	{
		result = 0;
		_putchar ('0');
	}
	return (result);
}
