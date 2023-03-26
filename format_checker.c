#include "main.h"

/**
 * __format_checker__ - The  function to check the conversion format
 * @c: The conversion specifier
 *
 * Return: The related specifier s for string and i for integer
 */
char __format_checker__(char c)
{
	if (c == 's' || c == 'c')
	{
		return ('s');
	}
	else if (c == 'd' || c == 'i' || c == 'u')
	{
		return ('i');
	}
	else
	{
		return ('\0');
	}
}
