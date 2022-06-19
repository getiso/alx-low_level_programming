#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
