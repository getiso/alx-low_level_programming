#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	int x = 0;

	while (*(str + x))
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}
