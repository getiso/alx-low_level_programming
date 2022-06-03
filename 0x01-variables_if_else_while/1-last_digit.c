#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int n;
	int l;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
		pritnf("%s %d is %d and is greater than 5\n", str, n, l);
	else if (l == 0)
		printf("%s %d is %d and is 0\n", str, n, l);
	else if (l < 6)
		printf("%S %d is %d and is less than and not 0\n", str, n, l);
	return (0);
}
