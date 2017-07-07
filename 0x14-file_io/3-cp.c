#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - copies the content of a file to another file.
 * @argc: argument one from user
 * @argv: argument two from user
 * return: 0 upon success, -1 for failure or NULL.
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, ret1, ret2;
	char buff[1204];

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		if_error2(fd1);
	}
	fd2 = open(argv[2], O_CREATE);
	if (fd2 == -1)
	{
		if_error3(fd2);
	}
	do{
		r_count = read(fd1, buff, 1204);
		w_count = write(fd2, buff, r_count);
		if (r_count != w_count)
		{
			ret1 = close(fd1);
			if (ret1 == -1)
			{
				if_error4(fd1);
			}
			ret2 = close(fd2);
			if (ret2 == -1)
			{
				if_error4(fd2);
			}
			if_error3(argv[2]);
		}
	}while(r_count != 0 || r_count != -1)
	close(fd1);
	{
		if_error4(fd1);
	}
	close(fd2);
	{
		if_error4(fd2);
	}
	return(0);
}
