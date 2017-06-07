#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds positive numbers
 * @argc: arguments passed to program
 * @argv: values of pointers to arguments
 * Return: always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int x, y, result;

	for (x = 1; x < argc; x++)
	{
		y = atoi(argv[x]);
		result += y;
	}
	printf("%d\n", result);
	return (0);
}
