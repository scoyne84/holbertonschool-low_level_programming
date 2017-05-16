#include "holberton.h"
#include <stdio.h>

/**
 * _abs - return absolute value for variable
 * @y: integer to be tested
 * Return: result.
 */
int _abs(int y)
{
	int result;

	if (y == 0)
	{
		result = '0';
	}
	else if (y < 0)
	{
		result = y * -1;
	}
	else
	{
		result = y;
	}
	return (result);
}
