#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combination of 2 digit
 * Use only 'putchar' 5 times
 * print in ascending order
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
	int y;
	int z;

	while (x < 100)
	{
		y = x % 10;
		z = x / 10;

		if (z < y)
		{
			putchar(z + '0');
			putchar(y + '0');

			if (x < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		x++;
	}
	putchar('\n');

	return (0);
}
