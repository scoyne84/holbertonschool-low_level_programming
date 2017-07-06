#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename:
 * @text_content:
 * Return: 1 on success, and -1 on failure or NULL.
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int fd;
	ssize_t file = 0;
	size_t length;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDONLY | O_WRONLY)
		if (fd == -1)
		{
			return (-1);
		}

}
