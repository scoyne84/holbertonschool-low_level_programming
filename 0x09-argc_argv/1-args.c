#include <stdio.h>

/**
 * main - prints # of arguments passed to it
 * @argc: arguments passed to program
 * @argv: pointer value of arguments
 * Return: always 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
