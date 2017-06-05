#include "holberton.h"

/**
 * _strchr - locates a given character in a string.
 * @s: string to be scanned
 * @c: character to search for
 * Return: pointer to first occurrence.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
