#include "main.h"

/**
 * square_check - checks for the square root of c
 * @a:guess at sqrt
 * @c: find sqrt of
 * Return: sqrt of c or -1
 */
int square_check(int a, int c)
{
	if (a * a == c)
		return (a);
	if (a * a > c)
		return (-1);
	return (square_check(a + 1, c));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to take its square root
 * Return: sqrt root of n or -1 if n not have sqrt
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (square_check(1, n));
}
