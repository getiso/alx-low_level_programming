#include "main.h"

/**
 * jack_bauer - write a function that prints every minute of the day 
 * Return: Always o (Success)
 */
void jack_bauer(void)
{
	int x; 
	int y;

	x = 0;

	while (x < 24)
	{
		for (y = 0; y < 60; y++)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
		}
		x++;
	}
}
