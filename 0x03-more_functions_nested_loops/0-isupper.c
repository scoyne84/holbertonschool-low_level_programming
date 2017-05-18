#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - determines if variable is uppercase.
 * @c: variable to be tested.
 * Return: Always 0.
 */
int _isupper(int c)
{
  if (c >= 'A' && c <= 'Z')
    {
      _putchar('1');
    }
  else
    {
      _putchar('0');
    }    
  return (0);
}
