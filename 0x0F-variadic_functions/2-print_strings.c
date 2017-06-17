#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;
	char *y;

	va_start(list, n);
	{
		for (x = 0; x < n; x++)
		{
			y = va_arg(list, char *);
			if (y != NULL)
			{
				printf("%s", y);
			}
			else if (y == NULL)
			{
				printf("(nil)");
			}
			if (separator != NULL && x < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(list);
}
