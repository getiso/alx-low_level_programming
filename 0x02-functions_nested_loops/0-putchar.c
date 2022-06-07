#include <stdio.h>
#include "main.h"
/**
 * main - main entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *chr = "_putchar";

	while (*chr)
	{
		_putchar(*chr);
		chr++;
	}
	_putchar('\n');

	return (0);
}
