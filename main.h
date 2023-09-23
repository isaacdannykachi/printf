#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
void print_bn(va_list arg_list, int *print_count);
void printf_c(va_list arg_list, int *print_count);
void printf_s(va_list arg_list, int *print_count);
void printf_d(va_list arg_list, int *print_count);
void printf_i(va_list arg_list, int *print_count);
void print_u(va_list arg_list, int *print_count);
void print_o(va_list arg_list, int *print_count);
void print_x(va_list arg_list, int *print_count);
void print_X(va_list arg_list, int *print_count);
void print_S(va_list arg_list, int *print_count);

int _printf(const char *format, ...);

#endif /* MAIN_H */
