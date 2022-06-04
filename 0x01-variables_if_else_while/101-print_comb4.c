#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combination of 3 digits
 * Use only 'putchar' 6 times
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;
	int r;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100;
		k = (i / 10) % 10;
		r = i % 10;

		if (j < k && k < 1)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(r + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
