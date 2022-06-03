#include <stdio.h>

/**
 * main - size of data type
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of char: %lu bytes\n", (unsigned long)sizeof(d));
	printf("size of int: %lu bytes\n", (unsigned long)sizeof(a));
	pritnf("Size of long int: %;u bytes\n", (unsigned long)sizeof(b));
	printf("size of long long int: %lu bytes\n", (unsigned long)sizeof(c));
	printf("size of float: %lu bytes\n", (unsigned long)sizeof(f));
	return (0);
}
