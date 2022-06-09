#include "main.h"

/**
 * times_table - write a function that prints 9 times table starting 0.
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int x; /*row*/
	int y; /*column*/
	int z; 

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (y = 1; y <= 9; y++)
		{
			z = x * y;

			if ((z / 10) > 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((z % 10) + '0');

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
