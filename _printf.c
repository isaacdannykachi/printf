#include "main.h"
/**
 * _printf - function to print char to stdout
 * @*format:pointer to string
 * *c: character to be printed
 * *str: string to be printed
 * @format: string to be printed
 *
 * Return: 0 if successful and -1 on error
 */
int _printf(const char *format, ...);
int _printf(const char *format, ...)
{
	va_list arg_num;
	int print_char = 0;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(arg_num, *format);

	while (format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			print_char++;
		}
		else
		{
			format++;
			if (*format ==  '%')
			{
				write(1, format, 1);
			}
			else if (*format == 'c')
			{
				char c = va_arg(arg_num, int);

				write(1, &c, 1);
				print_char++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(arg_num, char*);

				write(1, str, strlen(str));
				print_char += strlen(str);
			}
		}
		format++;
	}
	va_end(arg_num);
	return (print_char);
}
