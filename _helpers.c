#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1 otherwise -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _memcpy - copy memory area
 * @dest: Destination for copying
 * @src: Source to copy from
 * @n: The number of bytes to copy
 *
 * Return: The _memcpy() function returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * rev_str - reverses a string in place
 *
 * @s: string to reverse
 * Return: A pointer to a character
 */
char *rev_str(char *s)
{
	int len;
	int start;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);

	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);

	for (start = 0; start < len; start++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[start];
		dest[start] = tmp;
	}

	return (dest);
}

/**
 * write_str - Write a string on standard output
 * @str: String to write
 */
void write_str(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

/**
 * num_len - Calculates the length for a number
 * @num: The number for which the length is being calculated
 * @base: Base to be calculated by
 *
 * Return: An integer representing the length of a number
 */
unsigned int num_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num /= base;
	}
	return (i);
}
