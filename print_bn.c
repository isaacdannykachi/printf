#include "main.h"
#include <unistd.h>

/**
 * print_bn - Convert and print unsigned binary
 * @arg_list: va_list containing arguments
 * @print_count: pointer to print count
 *
 * Return: void
 */
void print_bn(va_list arg_list, int *print_count)
{
	unsigned int num = va_arg(arg_list, unsigned int);
	char bin_str[33];
	int num_len = 0;
	int i;
	int msb_found = 0;

	for (i = 31; i >= 0; i--)
	{
		char digit = ((num >> i) & 1) ? '1' : '0';

		if (digit == '1' || msb_found)
		{
			bin_str[num_len++] = digit;
			msb_found = 1;
		}
	}

	if (num_len == 0)
	{
		bin_str[num_len++] = '0';
	}

	bin_str[num_len] = '\0';

	write(1, bin_str, num_len);
	(*print_count) += num_len;
}
