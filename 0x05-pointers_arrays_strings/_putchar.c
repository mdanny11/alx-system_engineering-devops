#include "main.h"
#include<unistd.h>
/**
 * _putchar- writed the character c to stdout
 * @c: Ther character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errni is set appropriately.
 * */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
