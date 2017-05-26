#include "holberton.h"

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: 1st string in comparison
 * @s2: 2nd string in comparison
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int result = 0;

	for (i = 0; s1[i] && s2[i] && (s1[i] == s2[i]); i++)
		result = (s1[i] - s2[i]);

	return (result);
}
