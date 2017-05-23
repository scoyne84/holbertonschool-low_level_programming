#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: variable to be switched.
 * @b: variable to be switched.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int a;
	int b;
	int *a;
	int *b;

	a = 98;
	b = 42;

	a = &b;
	b = &a;

	*a = 98;
	*b = 42;
}
