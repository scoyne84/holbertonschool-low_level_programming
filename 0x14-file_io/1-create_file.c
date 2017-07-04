#include "holberton.h"

/**
 * create_file - function that creates a file. 
 * @filename: name of file
 * @text_content: content of text in file
 * Return: 1 if successful, -1 if failure
 */
int create_file(const char *filename, char *text_content);
{
  int o;
  int w;
  int len;

  if (filename == NULL)
    {
      return (-1);
    }
  o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
  if (text_content != NULL)
    {
      len = 0;
      while (text_content[len] != '\0')
	len++;
      w = write(o, text_content, len);
      if (w == -1)
	{
	  return (-1);
	}
    }
  close(o);
  return (1);
}
