#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - creates a file.
 * @filename: name of file to create
 * @text_content: content of file
 * Return: 1 on success, -1 on failure or NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t file = 0;
	size_t length;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	for (length = 0; text_content && text_content[length]; length++)
		;
	if (text_content && length)
	{
		file = write(fd, text_content, length);
	}
	close(fd);
		if (file == -1)
		{
			return (-1);
		}
	return (1);
}
