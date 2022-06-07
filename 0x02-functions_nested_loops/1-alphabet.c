#include "main.h"

/**
 * main - print lower alphabet
 */
void print_alphabet(void)
{
	char chr = 'a';

	while (chr <= 'z')
	{
		_putchar(chr);
		chr++;
	}
	_putchar('\n');
}
