#include <stdio.h>

/**
 * main - prints program name
 * @argc: arguments passed
 * @argv: array that holds string values
 * Return: always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
