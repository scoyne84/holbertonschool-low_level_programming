#include "holberton.h"

/**
 * _strlen - prints the length of the given string.
 * @s: variable representing string
 * Return: always success.
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a])
	{
		a++;
	}
	return (a);
}
