#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	char az;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
	_putchar('\n');
	}
}
