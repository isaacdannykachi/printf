#include "main.h"
#include <unistd.h>
/**
 * printf_c - prints char
 * @c: character printed
 * @*print_count: variable
 */
void printf_c(va_list args, int *print_count)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	(*print_count)++;
}
