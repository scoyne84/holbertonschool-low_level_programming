#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: variable representing first digit to print.
 * Return: void.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
		{
			n--;
		}
		else if (n < 98)
		{
			n++;
		}
	}
	printf("98\n");
}
