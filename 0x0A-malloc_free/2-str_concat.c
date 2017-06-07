#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns length of string
 * @str: string to measure
 * Return: always 0.
 */
int _strlen(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	return (0);
}
/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int w, x, y, z;
	int result;
	char *a;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	w = _strlen(s1);
	x = _strlen(s2);
	result = w + x + 1;
	a = malloc(sizeof(char) * result);

	if (a == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < w; y++)
	{
		a[y] = s1[y];
	}
	for (z = 0; z < x; z++)
	{
		a[y + z] = s2[z];
	}
	a[y + z] = '\0';
	return (a);
}
