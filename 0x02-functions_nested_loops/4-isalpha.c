#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students.
 * @c: character to be tested
 * Return: result.
 */
int _isalpha(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
