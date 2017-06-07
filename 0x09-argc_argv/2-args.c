#include <stdio.h>

/**
 * main - prints all arguments passed into program
 * @argc: arguments being passed
 * @argv: values of pointers to arguments
 *
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
