#include "main.h"
#include <unistd.h>

/**
 * print_S - Prints a string with special formatting
 * @arg_list: va_list containing arguments
 * @print_count: pointer to print count
 * Return: void
 */
void print_S(va_list arg_list, int *print_count)
{
	char *str = va_arg(arg_list, char *);
	char hex[3];

	while (*str)
	{
	if (*str < 32 || *str >= 127)
	{
	hex[0] = '\\';
	hex[1] = 'x';
	hex[2] = '\0';
	*print_count += write(1, hex, 2);

	hex[0] = (*str >> 4) < 10 ? (*str >> 4) + '0' : (*str >> 4) - 10 + 'A';
	hex[1] = (*str & 0x0F) < 10 ? (*str & 0x0F) + '0' : (*str & 0x0F) - 10 + 'A';
	*print_count += write(1, hex, 2);
	}
	else
	{
	*print_count += write(1, str, 1);
	}
	str++;
	}
}

