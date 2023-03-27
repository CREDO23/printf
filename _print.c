#include "main.h"

/**
 * print - The function to parse and print out all arg int the standar output .
 * @format: A string containing all specifiers.
 * @conv_list: A list of converter functions ( specifiers ).
 * @arg_list: A list containing all the argumentents passed to the program.
 *
 * Return: A total count of the characters printed.
 */
int print(const char *format, conv_type conv_list[], va_list arg_list)
{
	int i, j, nb_chars, chars;

	chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		_putchar(format[i]);
		chars++;
		if (format[i] == '%')
		{
			for (j = 0; conv_list[j].spec != NULL; j++)
			{
				if (format[i + 1] == conv_list[j].spec[0])
				{
					nb_chars = conv_list[j].func(arg_list);
					if (nb_chars == -1)
						return (-1);
					chars += nb_chars;
					break;
				}
			}
			if (format[i + 1] == '%')
			{
				_putchar('%');
				chars++;
			}
			if (conv_list[j].spec == NULL && format[i + 1] != ' ' && format[i] != '%')
			{
				if (format[i + 1] != '\0')
				{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				chars += 2;
				}
				else
				return (-1);
			}
			i++;
		}
	}
	return (chars);
}

