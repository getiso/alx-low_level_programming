#include "main.h"

/**
 * puts2 - print every character
 * @str: first string to print
 * Return: void
 */
void puts2(char *str)
{
	int x = 0, len = 0;

	while (str[x++])
		len++;

	for (x = 0; x < len; x += 2)
		_putchar(str[x]);

	_putchar('\n');
}
