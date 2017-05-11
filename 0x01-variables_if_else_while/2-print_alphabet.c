#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char az;

for (az = 'a'; az <= 'z'; az = az + 1)
{
putchar(az);
}
putchar('\n');

return (0);
}
