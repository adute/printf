#include "holberton.h"
#include <stdarg.h>
/**
 * print_int - prints decimal numbers
 * @arg_list: arguments list
 * Return: number of characters printed
 */

int print_int(va_list *arg_list)
{
unsigned int divisor = 1, i, resp, charPrinted = 0;
int n = va_arg(*arg_list, int);

if (n < 0)
{
	_putchar('-');
	charPrinted++;
	n *= -1;
}

for (i = 0; n / divisor > 9; i++, divisor *= 10)
;

for (; divisor >= 1; n %= divisor, divisor /= 10, charPrinted++)
{
	resp = n / divisor;
	_putchar('0' + resp);
}
return (charPrinted);
}
