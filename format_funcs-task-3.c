#include "holberton.h"
#include <stdarg.h>

/**
 * print_bin -prints base 2
 * @arg: va_list arguments
 *
 * Return: number of char printed
 */
int print_bin(va_list arg)
{
	unsigned int num, *b;
	int i;

	num = va_arg(arg, int);
	while (num > 0)
	{
		b[i] = num % 2;
		num = num / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	return (b[j]);
}
