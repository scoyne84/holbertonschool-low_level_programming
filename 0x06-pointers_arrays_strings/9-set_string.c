#include "holberton.h"

/**
 * set_string - sets the value of a pointer to char.
 * @s: pointer to be redirected
 * @to: value pointer should be redirected to.
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
