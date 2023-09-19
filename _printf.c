#include "main.h"
/**
 * _printf - function to print char to stdout
 * @*format: pointer to string
 * a: character to be printed
 * strg: string to be printed
 * @format: string to be printed
 *
 * Return: 0 if successful and -1 on error
 */
int _printf(const char *format, ...)
{
	va_list argn;
	unsigned int a;
	int strg = 0;
	int count = 0;

	va_start(argn, *format);

	for(a = 0; format[a] != '\0';  a++)
	{
		if (format[a] != '%')
		{
			_put(format[a]);
		}
		else
		{
			if (format[a + 1] ==  '%')
			{
				_put('%');
			}
			else if (format[a] == '%' && format[a + 1] == 'c')
			{
				_put(va_arg(argn, int));
				a++;
			}
			else if (format[a + 1] == 's')
			{
				strg = _putstr(va_arg(argn, char*));
				a++;
				count += (strg - 1);
			}
		}
		count += 1;;
	}
	va_end(argn);
	return (count);
}
