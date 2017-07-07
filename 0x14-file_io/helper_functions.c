#include <stdio.h>
#include <stdlib.h>

void if_error1(void)
{
dprintf("Usage: cp file_from file_to");
 exit(97);
}

void if_error2(void)
{
dprintf(" Error: Can't read from file NAME_OF_THE_FILE");
 exit(98);
}

void if_error3(void)
{
dprintf("Error: Can't write to NAME_OF_THE_FILE");
 exit(99);
}

void if_error4(void)
{
dprintf("Error: Can't close fd FD_VALUE");
 exit(100);
}
