#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: variable to be switched.
 * @b: variable to be switched.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
