/**
 * _printf - The printf funtion
 * @format: The string which content specifiers
 *
 * Return: The numer of characters printed
 */
int _printf(const char *format, ...)
{
		int i = 0, tmp, nchr = 0;
		va_list ap;

		va_start(ap, format);
		if (format == NULL)
			return (-1);
	while (*format != '\0')
	{
	if (*format != '%' || (*format == '%' && *(format + 1) == '%'))
	{
		_putchar(*format);
		nchr++;
	} else if (*format == '%' && __format_tracker__(*(format + 1)))
	{
		if (__format_tracker__(*(format + 1)) == 's')
		{
			if (*(format + 1) == 's')
			{
				char *ptr = va_arg(ap, char*);

				__print_string__(ptr, '\0', *(format + 1));
			}
			if (*(format + 1) == 'c')
			{
				char c = va_arg(ap, int);

				__print_string__("", c, *(format + 1));
			}
		}
		if (__format_tracker__(*(format + 1)) == 'i')
		{
			__print_number__(va_arg(ap, int), 10, *(format + 1));
		}
			format++;
	}
		format++;
	}
	va_end(ap);
	return (nchr);
}
