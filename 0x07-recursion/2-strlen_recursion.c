#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string whose length is measured
 * Return: int.
 */
int _strlen_recursion(char *s)
{
	int x;

	return (_strlen_recursion(s[x]));
}
