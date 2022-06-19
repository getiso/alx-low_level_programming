#include "main.h"

/**
 * print_most_numbers - prints numbers 01356789
 * Return: void
 */
void print_most_numbers(void)
{
	char chr;

	for (chr = '0'; chr <= '9'; chr++)
	{
		if (!(chr == '2' || chr == '4'))
			_putchar(chr);
	}
	_putchar('\n');
}
