#include "holberton.h"

/**
 * _strncpy - check the code for Holberton School students.
 * @dest: destination string
 * @src: string being copied
 * @n: string value
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x

	while (x = 0; x <= n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
