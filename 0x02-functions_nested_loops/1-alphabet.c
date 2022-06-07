#include "main.h"

/**
 * main - print lower alphabet
 * Description: print all lowercase character
 * Return: return nothing
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
