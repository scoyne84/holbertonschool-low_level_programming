#include "holberton.h"

/**
 * read_textfile - reads text file and prints to POSIX std output
 * @filename: name of file
 * @letters: number of letters to be read and printed
 * Return: the amount of letters it is capable of printing
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
  int fd;
  ssize_t x;
  char *buffer = malloc(sizeof(char) * letters);

  if (filename == NULL)
    {
      return (0);
  fd = open(filename, O_RDONLY);
  if (fd == -1)
    return (0);
  if (buffer == NULL)
    {
      close(fd);
      return (0);
    }
  x = read(fd, buffer, letters);
  close(fd);
  if (x == -1)
    {
      free(buffer);
      return (0);
    }
  write(STDOUT_FILENO, buffer, x);
  free(buffer);
  return (x);
}
