#include "main.h"

/**
 * reverse_array - reverse array contents
 * @a: integer array to be reversed
 * @n: array length
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	x = 0;
	n = n -1;
	
	while (x < n)
	{
		y = *(a + x);
		*(a + x) = *(a + n);
		*(a + n) = y;
		x++;
		n--;
	}
}
