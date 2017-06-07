#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, j;
	int sum = 0;

	for(i = 1; i < argc; i++)
	{
		for( j = 0; argv[i][j] != '\0'; j++)
		{
			if(!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}

	}
printf("%i\n", sum);
return(0);
}
