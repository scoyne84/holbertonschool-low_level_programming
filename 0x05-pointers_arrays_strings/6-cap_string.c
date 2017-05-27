#include "holberton.h"

/**
 * cap_string - check the code for Holberton School students.
 * @s: string to have words capitalized.
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char a[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] -= ('a' - 'A');
			}
			else
			{
				for (j = 0; a[j] != '\0'; j++)
				{
					if (a[j] == s[i - 1])
					{
						s[i] -= ('a' - 'A');
					}
				}
			}
		}
	}
	return (s);
}
