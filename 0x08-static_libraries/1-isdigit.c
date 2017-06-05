#include "holberton.h"

/**
 * _isdigit - check if variable is a digit 0-9.
 * @c: variable to be tested
 * Return: Always 0.
 */
int _isdigit(int c)
{
	int result;

	if (c >= '0' && c <= '9')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
