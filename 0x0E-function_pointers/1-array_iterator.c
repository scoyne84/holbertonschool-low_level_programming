#include "function_pointers.h"
/**
 * array_iterator - executes function given as parameter on elements of array.
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t x;

if (array != NULL && action != NULL)
{
for (x = 0; x < size; x++)
{
(*action)(array[x]);
}
}
}
