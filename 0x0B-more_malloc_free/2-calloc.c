#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: memory to be allocated
 * @size: size of array
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memarray;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	memarray = malloc(nmemb * size);
	if (memarray == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		memarray[i] = 0;
	}
	return (memarray);
}
