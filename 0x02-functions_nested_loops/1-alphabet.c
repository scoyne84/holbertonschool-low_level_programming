#include "holberton.h"
/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		_putchar(az);
	}
	_putchar('\n');
}
