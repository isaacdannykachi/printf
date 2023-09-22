#include "main.h"
#include <unistd.h>

/**
 * print_bn - Convert and prints ubsigned binary
 * @arg_list: va_list containing arguments
 * @print_count: pointer to print count
 * Return: void
 */
void print_bn(va_list arg_list, int *print_count)
{
	unsigned int num = va_arg(arg_list, unsigned int);
	char bin_str[33];
	int num_len = 0;
	int i;

	for (i = 31; i >= 0; i--)
	{
		bin_str[num_len++] = ((num >> i) & 1) ? '1' : '0';
	}

	bin_str[num_len] = '\0';

	write(1, bin_str, num_len);
	(*print_count) += num_len;
}
