#include "main.h"

/**
 * print_x - Convert and print unsigned int in lowercase hexadecimal format
 * @arg_list: va_list containing arguments
 * @print_count: pointer to print count
 *
 * Return: void
 */
void print_x(va_list arg_list, int *print_count)
{
	unsigned int num = va_arg(arg_list, unsigned int);
	char hex_digits[] = "0123456789abcdef";
	char num_str[9];
	int num_len = 0;
	int i;

	do {
	num_str[num_len++] = hex_digits[num % 16];
	num /= 16;
	}
	while (num > 0)
	{

	for (i = num_len - 1; i >= 0; i--)
	{
	write(1, &num_str[i], 1);
	(*print_count)++;
	}
	}
}

