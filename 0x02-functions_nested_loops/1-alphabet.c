#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az = az + 1)
	{
		_putchar (az);
	}
	_putchar ('\n');

}
