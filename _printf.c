#include "holberton.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - function that prints
 * @format: type of variable
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	char *str;
	va_list arg;
	int r;

	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	while (*str != '\0')
	{
		switch (*str)
		{
			case 's':
				str = va_arg(arg, char *);
				r = write(1, format, sizeof(str));
		}
		str++;
	}
	va_end(arg);
	return (r);
}
