#include "main.h"
/**
 * _putchar - prints char to stdout
 * @c: the char to print
 *
 * Return: On success 1 and -1 on error
 */
int _put(char c)
{
	return(write(1, &c, 1));
}
