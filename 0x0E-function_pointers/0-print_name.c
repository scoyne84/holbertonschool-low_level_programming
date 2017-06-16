#include "function_pointers.h"
/**
 * print_name - prints given name
 * @name: pointer to function
 * @f: pointer to beginning of name array
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
(*f)(name);
}
}
