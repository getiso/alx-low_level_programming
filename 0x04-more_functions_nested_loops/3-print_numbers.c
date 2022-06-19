#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	char chr;

	for (chr = '0'; chr <= '9'; chr++)
	{
		_putchar(chr);
	}
	_putchar('\n');
}
