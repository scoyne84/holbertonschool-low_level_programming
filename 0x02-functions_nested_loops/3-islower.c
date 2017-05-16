#include "holberton.h"
/**
 * _islower - check the code for Holberton School students.
 * @c: variable representing letter to be tested.
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
