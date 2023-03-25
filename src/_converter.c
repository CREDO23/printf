#include "main.h"


/**
 * converter - A converter [10 - 8] [10 - 2] [10 - 16]  , [10 - ...]
 * @num: The number to convert
 * @base: The base in which we'll convert @num
 *
 * Return: The @num converted
 */


char *converter(unsigned int num, int base)
{

	char rep[] = {'0', '1', '2', '3', '4', '5',
			'6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

	char *res = malloc(sizeof(int) + 4);

	char *tmp = malloc(sizeof(int) + 4);

	int i = 0;

	int len = 0;

	do {
		tmp[i++] = rep[num % base];

		num /= base;

	} while (num != 0);


	len = i - 1;

	i = 0;


	while (len >= 0)
	{
		res[len--] = tmp[i++];
	}


	res[i] = '\0';

	free(tmp);

	return (res);
}
