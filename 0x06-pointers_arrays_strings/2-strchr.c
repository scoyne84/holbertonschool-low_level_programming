#include "holberton.h"

/**
 * _strchr - locates a given character in a string.
 * @s: string to be scanned
 * @c: character to search for
 * Return: pointer to first occurrence.
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)

		if (x == c)
			return (c);
}
