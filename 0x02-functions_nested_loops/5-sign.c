#include "main.h"

/**
 * print_sign - print sign of a number
 * @x: check integer
 * Return: 1 and prints + if x is greater than zero
 * 0 and prints 0 if x is zero
 * -1 and prints - if x is less than zero
 */
int print_sign(int x)
{
	if (x >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (x == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (x < 0)
	{
		_putchar('-');
	}
	return (-1);
}
