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
	char *s, c;
	va_list arg;
	int r;
	
	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	while (*format)
	{
		switch (*format++)
		{
			case 's':
				s = va_arg(arg, char *);
				r = write(stdout, format, sizeof(s));
				break;
			case 'c':
				c = (char)va_arg(arg, int);
				r = write(stdout, &c, 1);
				break;
		}
	}
	va_end(arg);
	return (r);
}
