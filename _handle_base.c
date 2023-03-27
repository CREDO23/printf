#include "main.h"

/**
 * hex_checker - Checks which hex function is gonna be called
 * @num: Number to convert into letter
 * @x: Tells which hex function is calling
 *
 * Return: Ascii value for a letter
 */
int hex_checker(int num, char x)
{
	char *hex = "0123456789abcdef";
	char *Hex = "0123456789ABCDEF";

	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}

/**
 * print_binary - Converts a number from base 10 to binary
 * @list: List of arguments passed to this function
 *
 * Return: The length of the digit printed
 */
int print_binary(va_list list)
{
	unsigned int num;
	int i, len;
	char *str;
	char *reverse;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);

	len = num_len(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}

	str[i] = '\0';
	reverse = rev_str(str);

	write_str(reverse);
	free(str);
	return (len);
}

/**
 * print_octal - Prints the numeric representation of a number in octal base
 * @list: List of all the arguments passed to the program
 *
 * Return: Number of digits printed to stdout
 */
int print_octal(va_list list)
{
	unsigned int num;
	int len;
	char *oct_rep;
	char *rev;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);

	len = num_len(num, 8);

	oct_rep = malloc(sizeof(char) * len + 1);
	if (oct_rep == NULL)
		return (-1);

	for (len = 0; num > 0; len++)
	{
		oct_rep[len] = (num % 8) + 48;
		num /= 8;
	}

	oct_rep[len] = '\0';
	rev = rev_str(oct_rep);
	if (rev == NULL)
		return (-1);

	write_str(rev);
	free(oct_rep);
	free(rev);
	return (len);
}

/**
 * print_hex_lower - Prints a representation of a dec number on hex lowercase
 * @list: List of the arguments passed to the function
 *
 * Return: Number of characters printed
 */
int print_hex_lower(va_list list)
{
	unsigned int num;
	int len;
	int rmdr;
	char *hex_rep;
	char *rev;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);

	len = num_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);

	for (len = 0; num > 0; len++)
	{
		rmdr = num % 16;
		if (rmdr > 9)
		{
			rmdr = hex_checker(rmdr, 'x');
			hex_rep[len] = rmdr;
		}
		else
			hex_rep[len] = rmdr + 48;
		num /= 16;
	}

	hex_rep[len] = '\0';
	rev = rev_str(hex_rep);
	if (rev == NULL)
		return (-1);

	write_str(rev);
	free(hex_rep);
	free(rev);
	return (len);
}



/**
 * print_hex_upper - Prints a representation of a dec number on hex uppercase
 * @list: List of the arguments passed to the function
 *
 * Return: Number of characters printed
 */
int print_hex_upper(va_list list)
{
	unsigned int num;
	int len;
	int rmdr;
	char *hex_rep;
	char *rev;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);

	len = num_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);

	for (len = 0; num > 0; len++)
	{
		rmdr = num % 16;
		if (rmdr > 9)
		{
			rmdr = hex_checker(rmdr, 'X');
			hex_rep[len] = rmdr;
		}
		else
			hex_rep[len] = rmdr + 48;

		num /= 16;
	}

	hex_rep[len] = '\0';
	rev = rev_str(hex_rep);
	if (rev == NULL)
		return (-1);

	write_str(rev);
	free(hex_rep);
	free(rev);
	return (len);
}

