#include "main.h"
#include <unistd.h>
/**
 * @*print_count: argument
 * @num: variable
 * @num_str: array of characters
 * @is_negative: variable
 * @num_len: variable
 * @-num: variable
 * @divisor: variable
 * Return: integer on success
 */

void printf_i(va_list args, int *print_count)
{
	int num = va_arg(args, int);
	char num_str[12];
	int is_negative = 0;
	int num_len = 0;
	int divisor = 1000000000;
 
    if (num < 0)
	{
	is_negative = 1;
	num = -num;
	}

	if (num == 0)
	{
	num_str[num_len++] = '0';
	}
	else
	{
		while (divisor > 0)
	{
	int digit = num / divisor;
	if (digit > 0 || num_len > 0)
	{
	num_str[num_len++] = '0' + digit;
	}
	num %= divisor;
	divisor /= 10;
	}
	}

	if (is_negative)
	{
	num_str[num_len++] = '-';
	}

	write(1, num_str, num_len);
	(*print_count) += num_len;
}
