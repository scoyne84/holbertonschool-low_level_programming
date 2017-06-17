#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to print between numbers
 * @n: number of integers to print
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;
	int result;

	va_start(list, n);
	{
		for (x = 0; x < n; x++)
		{
			result = va_arg(list, int);
			printf("%d", result);
			if (separator != NULL && x < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(list);
}
