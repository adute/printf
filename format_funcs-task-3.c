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
	int num, b;
       
	num = va_arg(arg, int);
	 while (num != 0)
	 {
		 b = num % 2;
		 num = num / 2;
	 }
	 return (b);
}
