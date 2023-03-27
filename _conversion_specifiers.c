#include "main.h"

/**
 * print_int - Prints an integer
 * @list: list of arguments
 *
 * Return: The amount of digits printed.
 */
int print_int(va_list list)
{
	int len;

	len = print_number(list);

	return (len);
}

/**
 * print_uns - Prints Unsigned integers
 * @list: List of all of the argumets
 *
 * Return: The amount of digits printed
 */
int print_uns(va_list list)
{
	unsigned int n;

	n = va_arg(list, unsigned int);

	if (n == 0)
		return (print_uns_number(n));

	if (n < 1)
		return (-1);
	return (print_uns_number(n));
}

/**
 * print_percent - Prints a percent symbol
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
 * print_str - Prints a string
 * @list: list of arguments
 *
 * Return: The amount of characters printed.
 */
int print_str(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_char - Prints character
 * @list: list of arguments
 *
 * Return: Always 1
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));

	return (1);
}
