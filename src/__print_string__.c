#include "main.h"

/**
 * __print_string__ - The function to print string or character
 * @specifier: The specifier
 * @str: The string
 * @c: The character
 *
 * Return: Nothing
 */
void __print_string__(char *str, char c, char specifier)
{
	if (specifier == 's')
	{

		while (*str != '\0')
		{
			_putchar(*str);

			str++;
		}
	}

	if (specifier == 'c')
	{
		_putchar(c);
	}
}
