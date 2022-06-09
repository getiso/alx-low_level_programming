#include <stdio.h>

/**
 * main - sum multiple of 3 or 5 below 1024
 * Return: sum of multiple
 */
int main(void)
{
	int x;
	int y; /*sum*/

	y = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			y = y + x;
		}
	}
	printf("%d\n", y);
	return (0);
}
