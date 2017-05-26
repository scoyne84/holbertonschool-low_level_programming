#include "holberton.h"

/**
 * string_toupper - check the code for Holberton School students.
 * @s: pointer
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - ('a' - 'A');
	}
	return (s);
}
