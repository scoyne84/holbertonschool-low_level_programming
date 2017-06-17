#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;

	va_start(list, n);
	{
		for (x = 0; x < n; x++)
		{
			printf("%d", va_arg(list, int));
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
