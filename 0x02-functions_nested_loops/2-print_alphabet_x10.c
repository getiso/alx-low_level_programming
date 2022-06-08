#include "main.h"

/**
 * print_alphabet_x10 - print 10 times lowercase alphabet
 * Return: none
 */
void print_alphabet_x10(void)
{
	char chr;
	int j;

	j = 1;

	while (i < 10)
	{
		chr = 'a';

		while (chr <= 'z')
		{
			_putchar(chr);
			chr++;
		}
		_putchar('\n');
		j++;
	}
}
