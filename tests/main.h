#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct converter - defines a structure for specifiers and functions
*
* @spec: The specifier
* @func: The function associated
*/
typedef struct converter
{
	char *spec;
	int (*func)(va_list);
} conv_type;

int _putchar(char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *rev_str(char *s);
void write_str(char *str);
unsigned int num_len(unsigned int num, int base);
int print_rev_str(va_list arg);
int rot13(va_list list);
int print_number(va_list args);
int print_uns_number(unsigned int n);
int print_percent(__attribute__((unused))va_list list);
int hex_checker(int num, char x);
int print_binary(va_list list);
int print_octal(va_list list);
int print_hex_lower(va_list list);
int print_hex_upper(va_list list);
int print_int(va_list list);
int print_uns(va_list list);
int print_str(va_list list);
int print_char(va_list list);
int print(const char *format, conv_type conv_list[], va_list arg_list);
int _printf(const char *format, ...);

#endif
