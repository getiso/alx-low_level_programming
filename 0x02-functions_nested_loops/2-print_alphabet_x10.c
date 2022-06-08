#include "main.h"

/**
 * print_alphabet_x10 - print 10 times lowercase alphabet
 * Return: none
 */
void print_alphabet_x10(void);
{
	char chr;
	int j;

	j = 1;

	while (j < 10)
	{
		for (chr = 'a'; chr <= 'z'; chr++)
		{
			_putchar(chr);
		}
		j++;
		_putchar('\n');
	}
}
