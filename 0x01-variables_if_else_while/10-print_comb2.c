#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens = '0';
	int ones = '0';

	while (tens <= '9')
	{
		while (ones <= '9')
		{
			putchar (tens);
			putchar (ones);
			if (tens == '9' && ones == '9')
			{
				putchar ('\n');
			}
			else
				putchar (','); putchar (' ');
			ones++;
		}
		ones = '0';
		tens++;
	}
	return (0);
}
