#include "holberton.h"

/**
 * _strncat - check the code for Holberton School students.
 * @dest: string to add to
 * @src: string to copy from
 * @n: number of bytes to copy
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;
	int original_n = n;

	for (x = 0; dest[x] != '\0'; x++)
	{
		;
	}
	for (y = 0; src[y] != '\0'; y++)
	{
		if (n > 0)
		{
			dest[x] = src[y];
			x++;
			n--;
		}
	}
	if (y < original_n)
	{
	dest[x] = '\0';
	}
	return (dest);
}
