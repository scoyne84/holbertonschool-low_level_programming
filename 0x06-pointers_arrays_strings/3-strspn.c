#include "holberton.h"

/**
 * _strspn - check the code for Holberton School students.
 * @s: string to be evaluated
 * @accept: string for comparison
 * Return: char.
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;

	for (i = 0; s[i]; i++)
	{
		for (j =0; accept[j]; j++)
			break;
		if (accept[j] = '\0')
			break;
	}
	return (i);
}
