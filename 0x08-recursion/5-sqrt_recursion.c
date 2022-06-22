#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to take its square root
 * Return: sqrt root of n or -1 if n not have sqrt
 */
int _sqrt_recursion(int n)
{
	int x;

	if (x * x == n)
		return x;
	if (x * x > n)
		return (-1);
	return (_sqrt_recursion(x + 1, n));
}
