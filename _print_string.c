#include "main.h"

/**
 * print_rev_str - Calls a function to reverse and print a string
 * @arg: Argument passed to the function
 *
 * Return: The amount of characters printed
 */

int print_rev_str(va_list arg)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(arg, char *);

	if (str == NULL)
		return (-1);

	ptr = rev_str(str);

	if (ptr == NULL)
		return (-1);

	for (len = 0; ptr[len] != '\0'; len++)
		_putchar(ptr[len]);

	free(ptr);

	return (len);
}

/**
 * rot13 - Converts string to rot13
 * @list: string to convert
 *
 * Return: converted string
 */
int rot13(va_list list)
{
	int i;
	int j;
	char *str;
	char from[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char to[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);

	if (str == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == from[j])
			{
				_putchar(to[j]);
				break;
			}
		}
		if (j == 53)
			_putchar(str[i]);
	}
	return (i);
}
