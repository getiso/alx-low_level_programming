#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - main block
 *Description: use putchar function to print lower alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
