#include <stdio.h>
#include <stdlib.h>

/**
 * if_error1 - returns error message if incorrect arguments passed to function
 * Return: void
 */
void if_error1(int)
{
dprintf(fd[1], "Usage: cp file_from file_to");
exit(97);
}

/**
 * if_error2 - returns error message if reading of file 1 fails
 * Return: void
 */
void if_error2(int)
{
dprintf(fd[1], "Error: Can't read from file NAME_OF_THE_FILE");
exit(98);
}

/**
 * if_error3 - returns error message if creation of or write to file 2 fails
 * Return: void
 */
void if_error3(int)
{
dprintf(fd[2], "Error: Can't write to NAME_OF_THE_FILE");
exit(99);
}

/**
 * if_error4 - returns error message if file descriptor 1 fails to close
 * Return: void
 */
void if_error4(int)
{
dprintf(fd[1], "Error: Can't close fd FD_VALUE");
exit(100);
}

/**
 * if_error5 - returns error message if file descriptor 2 fails to close
 * Return: void
 */
void if_error5(int)
{
dprintf(fd[2], "Error: Can't close fd FD_VALUE");
exit(100);
}

/**
 * if_error6 - return error message if write to file 2 fails
 * Return: void
 */
void if_error6(char **argv[])
{
dprintf(fd[2], "Error: Can't write to NAME_OF_THE_FILE");
exit(99);
}
