#include "main.h"

/**
 * times_table - write a function that prints 9 times table starting 0.
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 0; y++)
		{
			z = x * y;

			if ((z / 10) == 0)
			{
				if (y != 0)
					_putchar(' ');
				_putchar(z + '0');

				if (y == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
				if (y == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
