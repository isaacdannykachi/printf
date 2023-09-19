#include "main.h"
/**
 * _printf - function to print
 * @*format: format string
 * @format: format string
 * @*str: string to be printed
 *
 * Return: no of chars
 */
int _printf(const char *format, ...);
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
		if (*format == '%')
		{
		write(1, "%", 1);
		print_count++;
		}
		else if (*format == 'c')
		{
		char c = va_arg(arg_list, int);

		write(1, &c, 1);
		print_count++;
		}
		else if (*format == 's')
		{
		char *str = va_arg(arg_list, char *);

		if (str)
		{
			write(1, str, strlen(str));
			print_count += strlen(str);
		}
		else
		{
			write(1, "(null)", 6);
			print_count += 6;
		}
	}
	}
	format++;
	}

	va_end(arg_list);

	return (print_count);
}

