#include "main.h"

/**
 * prime_check - check the number is prime or not
 * @f: factor to check
 * @p: possible prime number
 * Return: 1 if prime or 0 otherwise
 */
int prime_check(int f, int p)
{
	if (p < 2 || p % f == 0)
		return (0);
	else if (f > p / 2)
		return (1);
	else
		return (prime_check(f + 1, p));
}
/**
 * is_prime_number - check the number is prime or not
 * @n: number to check
 * Return: 1 if n is prime or 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
