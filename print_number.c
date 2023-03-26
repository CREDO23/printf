#include "main.h"

/**
 * __print_number__ - A converter [10 - 8] [10 - 2] [10 - 16]  , [10 - ...]
 * @num: The number to convert
 * @base: The base in which we'll convert @num
 * @specifier: The conversion sppecifier
 *
 * Return: The @num converted
 */
void __print_number__(int num, unsigned int base, char specifier)
{
	char rep[] = {'0', '1', '2', '3', '4', '5',
			'6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	char *res = malloc(sizeof(int) + 4);
	char *tmp = malloc(sizeof(int) + 4);
	int i = 0;
	int len = 0;
	int ngtv = 0;

	if (specifier != 'u' && num < 0)
	{
		num = -num;
		ngtv = 1;
	}

	do {
		tmp[i++] = rep[num % base];
		num /= base;
	} while (num != 0);

	if (specifier != 'u' && ngtv)
	{
		tmp[i++] = '-';
	}

	len = i - 1;
	i = 0;

	while (len >= 0)
	{
		res[len--] = tmp[i++];
	}

	res[i] = '\0';
	free(tmp);

	while (*res != '\0')
	{
		_putchar(*res);
		res++;
	}
}
