#include <stdio.h>

/**
 * main - print even sum from Fibonacci sequences
 * values not exceed 4,000,000
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x = 1;
	long int y = 2;
	long int z;
	long int sum_term = 0;
	long int sum_total = 0;

	for (z = 0; z < 49; z++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			sum_total = sum_total + y;
		}
		sum_term = x + y;
		x = y;
		y = sum_term;
	}
	printf("%ld\n", sum_total);
	return (0);
}
