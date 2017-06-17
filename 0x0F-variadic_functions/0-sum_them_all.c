#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - adds given integers together
 * @n: integers to add
 * Return: always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int result = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);
	{
		for (i = 0; i < n; i++)
		{
			result += va_arg(list, int);
		}
	}
	va_end(list);
	return (result);
}
