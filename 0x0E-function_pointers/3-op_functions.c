#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two integers
 * @a: integer 1
 * @b: integer 2
 * Return: 0.
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtract two integers
 * @a: integer 1
 * @b: integer 2
 * Return: 0.
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: integer 1
 * @b: integer 2
 * Return: 0.
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divides two integers
 * @a: integer 1
 * @b: integer 2
 * Return: 0.
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - returns remainder of division by ints a and b
 * @a: integer 1
 * @b: integer 2
 * Return: 0.
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
