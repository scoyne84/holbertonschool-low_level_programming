#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - selects correct function to perform operation asked by user
 * @s: points to function being called
 * Return: 0.
 */
int (*get_op_func(char *s))(int, int)
{
  op_t ops[] = {
    {"+", op_add},
    {"-", op_sub},
    {"*", op_mul},
    {"/", op_div},
    {"%", op_mod},
    {NULL, NULL}
};
  int i = 0;

  while (s);
  {
    if (ops[i].ops[0] == s[0])
      {
	return (ops[i].f);
      }
i++
return (NULL);
}
