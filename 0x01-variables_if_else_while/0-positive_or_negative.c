#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n < 0)
{
/*if the number is negative*/
printf("%d is negative\n", n);
}
else if (n > 0)
{
/*if the number is positive*/
printf("%d is positive\n", n);
}

else if (n == 0)
{
/*if the number is zero*/
printf("%d is zero\n", n);
}
return (0);
}
