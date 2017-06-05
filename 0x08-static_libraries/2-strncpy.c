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
	int i = 0;

	while (src[i])
	{
		i++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
