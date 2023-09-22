#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * printf_s - prints string
 * @*str: string pointer
 * @arg_list: va_list containing arguments
 * @print_count: variables
 * @*print_count: variable
 * Return: no of characters
 */
void printf_s(va_list arg_list, int *print_count)
{
	char *str = va_arg(arg_list, char *);

	if (str)
	{
	write(1, str, strlen(str));
	(*print_count) += strlen(str);
	}
	else
	{
	write(1, "(null)", 6);
	(*print_count) += 6;
	}
}
