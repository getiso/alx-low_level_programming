#include <stdio.h>
/**
 * main - print the first 50 Fibonacci numbers starting with 1 and 2
 * numbers separated y comma followed by space
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x;
	long int y;
	long int z;
	long int next_term;

	y = 1;
	z = 2;

	for (x = 1; x <= 50; ++x)
	{
		if (y != 20365011074)
		{
			printf("%ld, ", y);
		} else 
		{
			printf("%ld\n", y);
		}
		next_term = y + z;
		y = z;
		z = next_term;
	}
	return (0);
}
