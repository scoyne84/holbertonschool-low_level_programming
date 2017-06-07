#include <stdio.h>

/**
 * main - prints program name 
 * @argc: arguments passed
 * @argv: array that holds string values
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
