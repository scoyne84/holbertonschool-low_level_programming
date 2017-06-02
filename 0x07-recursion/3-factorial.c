#include "holberton.h"

/**
 * factorial - returns factorial of given number.
 * @n: variable representing input number
 * Return: int.
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
