#include "main.h"

/**
 * jack_bauer - write a function that prints every minute of the day 
 * Return: Always o (Success)
 */
void jack_bauer(void)
{
	int a; 
	int b;

	a = 0;

	while (a < 24)
	{
		for (b = 0; b < 60; j++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
		i++;
	}
}
