#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to occupy memory
 * Return: always 0.
 *
 */
char *_strdup(char *str)
{
	int x, y;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
	{
		;
	}
	a = malloc(x * sizeof(char) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < x; y++)
	{
		a[y] = str[y];
	}
	return (a);
}
