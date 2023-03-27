#include "main.h"

/**
 * _printf - The printf function
 * @format: A string containing all the desired characters
 * and conversion specifiers
 *
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int nb_chars;
	conv_type conv_list[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{"b", print_binary},
		{"r", print_rev_str},
		{"R", rot13},
		{"u", print_uns},
		{"o", print_octal},
		{"x", print_hex_lower},
		{"X", print_hex_upper},
		{NULL, NULL}
	};

	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	nb_chars = print(format, conv_list, arg_list);

	va_end(arg_list);

	return (nb_chars);
}
