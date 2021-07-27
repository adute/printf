#include "holberton.h"

/**
 * _pow_recursion - return x raised to y
 * @x: base
 * @y: power
 *
 * Return: x
 * -1: y<0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (_pow_recursion(x, y - 1) * x);
}
