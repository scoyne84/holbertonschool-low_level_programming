#include "holberton.h"

/**
 * _strcat - check the code for Holberton School students.
 * @dest: destination for copied string
 * @src: string to copy
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
