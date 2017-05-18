#include "holberton.h"

/**
 * _isupper - determines if variable is uppercase.
 * @c: variable to be tested.
 * Return: Always 0.
 */
int _isupper(int c)

{
	int result;

	if (c >= 'A' && c <= 'Z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
