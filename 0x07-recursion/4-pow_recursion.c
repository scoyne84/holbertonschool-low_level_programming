#include "holberton.h"

/**
 * _pow_recursion - returns value of x to power y..
 * @x: number to be raised by power
 * @y: power to raise x by
 * Return: int.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
