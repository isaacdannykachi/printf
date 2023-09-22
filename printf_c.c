#include "main.h"
#include <unistd.h>
/**
 * printf_c - prints char
 * @*print_count: variable
 * @arg_list: va_list containng argument
 * @print_count: variables
 * Return: void
 */
void printf_c(va_list arg_list, int *print_count)
{
	char c = va_arg(arg_list, int);

	write(1, &c, 1);
	(*print_count)++;
}
