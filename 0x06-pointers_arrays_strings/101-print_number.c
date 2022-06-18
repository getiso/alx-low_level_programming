#include "main.h"

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int x0, x1, x2, x3;
	int y0, y1, y2;

	x0 = n / 1000;
	y0 = x0;
	x1 = (n / 1000) % 10;
	y1 = y0 + x1;
	x2 = (n / 100) % 10;
	y2 = y1 + x2;
	x3 = n % 10;
	if (n < 0)
	{
		_putchar('-');
		x0 *= -1;
		x1 *= -1;
		x2 *= -1;
		x3 *= -1;
	}
	if (y0 != 0)
		_putchar('0' + x0);
	if (y1 != 0)
		_putchar('0' + x1);
	if (y2 != 0)
		_putchar('0' + x2);
	_putchar('0' + x3);
}
