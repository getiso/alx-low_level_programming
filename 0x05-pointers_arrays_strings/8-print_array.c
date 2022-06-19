#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array of integers
 * @a: array to print
 * @n: number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		printf("%d", a[x]);
		if (x < (n - 1))
			printf(", ");
		x++;
	}
	printf("\n");
}
