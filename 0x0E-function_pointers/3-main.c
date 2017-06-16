#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs the mathematical operation asked by user
 * @a: integer 1 for calc input
 * @b: integer 2 for calc input
 * Return: 0.
 */
int main(int argc, char *argv[])
int (*f)(int, int);
{
if (argc != 4)
{
printf("Error\n");
exit(98);      
}
f = get_op_func(argv[2]);
if (f == NULL)
{
printf("Error\n");
exit(99);    
}
printf("%d\n", get_op(argv[2]) (a, b);
return (0);
}
