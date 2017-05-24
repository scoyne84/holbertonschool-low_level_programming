#include "holberton.h"

/**
 * rev_string - check the code for Holberton School students.
 * @s: string
 * Return: void.
 */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = 0; s[i]; i++)
	{
	for (j = 0; j < i; j++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
	}
}
