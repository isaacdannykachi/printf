#include "main.h"
/**
 * _printf - function to print
 * @*format: format string
 * @format: format string
 * @*str: string to be printed
 *
 * Return: no of chars
 */
int _printf(const char *format, ...)
{
	va_list arg_list;
	int print_count = 0;

	va_start(arg_list, format);

	while (*format)
	{
		if (*format != '%')
		{
		write(1, format, 1);
		print_count++;
		}
	else
		{
		format++;
		if (*format == '%') {
		write(1, "%", 1);
		print_count++;
		}
		else if (*format == 'c') {
		printf_c(arg_list, &print_count);
		}
		else if (*format == 's') {
		printf_s(arg_list, &print_count);
		}
		else if (*format == 'b') {
		print_bn(arg_list, &print_count);
		}
	else if (*format == 'd' || *format == 'i') 
	{
	printf_d(arg_list, &print_count);
		}
	}
	format++;
	}

	va_end(arg_list);

	return print_count;
}
