#include "holberton.h"

/**
 * read_textfile - reads text file and prints to POSIX std output
 * @filename: name of file
 * @letters: number of letters to be read and printed
 * Return: the amount of letters it is capable of printing
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
  int a;
  ssize_t x;
  char *buffer = malloc(sizeof(char) * letters);

  if (filename == NULL)
    {
      return (0);
    }
  a = open(filename, O_RDONLY);
  if (a == -1)
    {
      return (0);
    }
  if (buffer == NULL)
    {
      close(a);
      return (0);
    }
  x = read(a, buffer, letters);
  close(a);
  if (x == -1)
    {
      free(buffer);
      return (0);
    }
  write(STDOUT_FILENO, buffer, x);
  free(buffer);
  return (x);
}
