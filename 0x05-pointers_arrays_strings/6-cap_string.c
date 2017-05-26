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
	char a[] = " ,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] -= ('a' - 'A');
			}
			else
			{
				while (a[j] != '\0')
				{
					if (a[j] == s[i - 1])
					{
						s[i] -= ('a' - 'A');
					}
				j++;
				}
			}
			i++;
		}
	}
	return (s);
}
