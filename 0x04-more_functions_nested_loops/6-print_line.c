#include "main.h"

/**
 * print_line - draw a straight line using underscore (_)
 * @n: number of times the _ printed
 * Return: void
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
