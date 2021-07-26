#include  <stdarg.h>
#include <unistd.h>
#include "holberton.h"

/**
 * str_print - Variadic function that prints string
 * @format: format of function
 *
 * Return: string
 */
str_print(const char *format, ...)
{
	va_list arg;
	char *str;

	va_start(arg);
	str = va_arg(arg, char *);
	return (write(1, format, sizeof(str));
			va_end(arg);
}
