#include <unistd.h>

/**
 * _putchar - writes char c to std out
 * @c: letter to be printed
 * Return: Always 1
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
