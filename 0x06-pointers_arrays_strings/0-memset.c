#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: string position
 * @b: constant byte
 * @n: spaces to fill in memory
 * Return: pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(s + x) = b;
		x++;
	}
return (s);
}
