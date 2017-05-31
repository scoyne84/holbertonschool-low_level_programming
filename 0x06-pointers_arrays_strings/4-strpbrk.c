#include "holberton.h"

/**
 * _strpbrk - searches a string for any set of bytes.
 * @s: string to be scanned
 * @accept: string containing characters to match.
 * Return: pointer to matching char.
 */
char *_strpbrk(char *s, char *accept)
{
	char scan;
	int x, y;

	while ((x = *s++) != 0)
	{
		for (scan = accept; (y = scan++) != 0;)
		{
			if (y == x)
			{
				return ((char *)(s - 1));
			}
		}
	}
	return ('\0');
}
