#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combination to single digit number
 * Use only 'putchar'
 * Separate by commas and space 4 times
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j = 0;

	while (j < 10)
	{
		putchar(j + '0');
		if (j < 9)
		{
			putchar(44);
			putchar(32);
		}
		j++;
	}
	putchar('\n');

	return (0);
}
