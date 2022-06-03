#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %lu bytes\n", (unsigned long) sizeof(a));
	printf("size of int: %lu bytes\n", (unsigned long)sizeof(b));
	pritnf("Size of long int: %;u bytes\n", (unsigned long)sizeof(c));
	printf("size of long long int: %lu bytes\n", (unsigned long)sizeof(d));
	printf("size of float: %lu bytes\n", (unsigned long)sizeof(f));
	return (0);
}
