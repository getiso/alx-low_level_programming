#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 * number separated by comma, followed by a space
 * number should be printed in order
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
	}
	else
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	printf("98\n");
}
