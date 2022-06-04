#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combination of 3 digits
 * Use only 'putchar' 6 times
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	int z;
	int r;

	for (x = 0; x < 1000; x++)
	{
		y = x / 100;
		z = (x / 10) % 10;
		r = x % 10;

		if (y < z && z < 1)
		{
			putchar(y + 'o');
			putchar(z + '0');
			putchar(r + '0');

			if (x < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
