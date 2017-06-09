#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string to be added to by string 2
 * @s2: string to add to string 1
 * @n: position in array
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;
	int length = 0;

	for (i = 0; s1 && (s1[i] != '\0'); i++)
	{
		length++;
	}
	for (i = 0; s2 && (s2[i] != '\0'); i++)
	{
		length++;
	}
	p = malloc(++length);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1 && (s1[i] != '0'); i++)
	{
		p[i] = s1[i];
	}
	j = i;
	for (i = 0; s2 && (s2[i] != '\0') && (i < n); i++)
	{
		p[i+j] = s2[i];
	}
	p[j] = '\0';
	return (p);
}
