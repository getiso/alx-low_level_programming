#include "main.h"

/**
 * print_alphabet_x10 - print 10 times lowercase alphabet
 */
void print_alphabet_x10(void)
{
	char chr;
	int j = 1;

	while (j < 11)
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
