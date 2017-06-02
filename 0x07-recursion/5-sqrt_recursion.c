#include "holberton.h"

/**
 * _sqrt_recursion - returns natural square root of number.
 * @n: number to be calculated
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n * _sqrt_recursion(n));
}
