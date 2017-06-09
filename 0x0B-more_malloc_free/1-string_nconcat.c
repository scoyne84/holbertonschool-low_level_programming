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
	unsigned int a, b, c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a]; a++)
	{
		;
	}
	for (b = 0; s2[b]; b++)
	{
		;
	}
	if (b > n)
	{
		b = n;
	}
	p = malloc((b * sizeof(char)) + (a * sizeof(char) + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		p[c] = s1[c];
	}
	for (c = 0; c < b; c++)
	{
		p[c + a] = s2[c];
	}
	p[a + b] = '\0';
	return (p);
}
