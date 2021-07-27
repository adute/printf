#include "holberton.h"
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

	va_start(arg);
	 for (str = format; *str != '\0'; str++)
	 {
		 while (*str != '%')
		 {
			i =  write (1, *str, 1);
			 str++;
		 }
		 str++;
		 switch (*str)
		 {
			 case 's':
				 s = va_arg(arg, char *);
				i = write(1, format, sizeof(s));
		 }
	 }///str = va_arg(arg, char *);
			va_end(arg);
	return (i);
}
