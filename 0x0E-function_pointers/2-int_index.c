#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: array being checked by function
 * @size: number of elements in the array
 * @cmp: pointer to function being called
 * Return: 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int a, b;

if (array != NULL && cmp != NULL && size > 0)
{
for (a = 0; a < size; a++)
{
b = cmp(array[a]);
if (b != '\0')
{
break;
}
}
if (a < size)
{
return (a);
}
}
return (-1);
}
