#include <stdarg.h>
#include "holberton.h"

/**
 * print_percentage_and_char - print % and a char
 * @c: char input
 * Return: 2
 */

int print_percentage_and_char(char c)
{
	_putchar('%');
	_putchar(c);

	return (2);
}

/**
 * print_normal_char - prints a char that isn't from va_list
 * @c: char
 * Return: 1, which is the count of character printed
 */
int print_normal_char(char c)
{
	_putchar(c);

	return (1);
}

/**
 * print_char - prints a char
 * @arg: pointer to a char
 * Return: integer, number of characters printed
 */

int print_char(va_list *arg)
{
	_putchar(va_arg(*arg, int));

	return (1);
}

/**
 * print_string - prints a string
 * @arg: pointer to string
 * Return: integer, number of characters printed
 */

int print_string(va_list *arg)
{
	char *str;
	int i;

	str = va_arg(*arg, char *);

	if (!str)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_percentage - prints %
 * @arg: pointer
 * Return: 1,
 */

int print_percentage(va_list *arg)
{
	(void)arg;
	_putchar('%');
	return (1);
}
