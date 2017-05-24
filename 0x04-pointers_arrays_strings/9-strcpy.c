#include "holberton.h"

/**
 * _strcpy - copies string into new destination.
 * @dest: pointing to destination for string
 * @src: pointing to source string
 * Return: value of pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
