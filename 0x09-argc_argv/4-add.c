#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: arguments passed to program
 * @argv: values of pointers to arguments
 * Return: always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int x, y, z;
	int result;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		z = atoi(argv[x]);
		result += z;
	}
	printf("%d\n", result);
	return (0);
}
