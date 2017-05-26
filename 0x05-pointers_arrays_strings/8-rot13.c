#include "holberton.h"

/**
 * rot13 - encodes the given string.
 * @s: input string
 * Return: Always 0.
 */
char *rot13(char *s)
{
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (s[i] == in[j])
			{
				s[i] = out[j];
				break;
			}
		}
	}
	return (s);
}
