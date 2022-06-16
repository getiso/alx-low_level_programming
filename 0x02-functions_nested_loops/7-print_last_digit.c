#include "main.h"

/**
 * print_last_digit - write a function that prints the last digit of a number
 * @x: int to prints the last digit
 * Return: last digit value
 */
int print_last_digit(int x)
{
	int y;

	if (x < 0)
		x = -x;

	y = x % 10;

	if (y < 0)
		y = -y;

	_putchar(y + '0');

	return (y);
}
