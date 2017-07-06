#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - creates a file.
 * @filename:
 * @text_content:
 * Return: 1 on success, -1 on failure or NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t file = 0;
	size_t len;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open("filename", O_RDONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	for (len = 0; text_content && text_content[len]; len++)
		;
	if (text_content && len)
	{
		file = write(fd, text_content, len);
	}
	close(fd);
		if (file == -1)
		{
			return (-1);
		}
	return (1);
}
