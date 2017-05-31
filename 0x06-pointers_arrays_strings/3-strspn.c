#include "holberton.h"

/**
 * _strspn - check the code for Holberton School students.
 * @s: string to be evaluated
 * @accept: string for comparison
 * Return: char.
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		if (n != i)
		{
			break;
		}
		for (j = 0; accept[j]; j++)
		{
			break;
			if (s[i] == accept[j])
			{
				n++;
			}
	
		}
	}	
	return (n);
}
