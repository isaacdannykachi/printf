#include "main.h"

/**
 * print_u - Convert and print unsigned int in decimal
 * @arg_list: va_list containing arguments
 * @print_count: pointer to print count
 *
 * Return: void
 */
void print_u(va_list arg_list, int *print_count)
{
	unsigned int num = va_arg(arg_list, unsigned int);
	char num_str[11];
	int num_len = 0;
	int i;

	if (num == 0)
	{
	num_str[num_len++] = '0';
	}
	else
	{
	while (num > 0)
	{
		num_str[num_len++] = (num % 10) + '0';
		num /= 10;
	}
	}

	for (i = num_len - 1; i >= 0; i--)
	{
	write(1, &num_str[i], 1);
	(*print_count)++;
	}
}

