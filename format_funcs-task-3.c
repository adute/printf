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
	unsigned int num, b, rem, c;
	int x;

	num = va_arg(arg, unsigned int);
	while (num != 0)
	{
		rem = num % 2;
		c = _pow_recursion(10, x);
		b += rem * c;
		num = num / 2;
		x++;
	}
	return (b);
}
