#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 *@x: integer to print natural numbers
 * number separated by comma, followed by a space
 * number should be printed in order
 */
void print_to_98(int x)
{
	if (x <= 98)
	{
		for (x = x; x < 98; x++)
			printf("%d, ", x);
	}
	else
		for (x = x; x > 98; x--)
			printf("%d, ", x);
	printf("98\n");
}
