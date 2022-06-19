#include "main.h"

/**
 * puts2 - prints every character
 * @str: first string to print
 * Return: void
 */
void puts2(char *str)
{
	int x =0;

	while (*(str + x))
	{
		_putchar(*(str + x));
		x = x + 2;
	}
	_putchar('\n');
}
