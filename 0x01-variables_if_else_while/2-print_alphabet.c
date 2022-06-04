#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - main block
 *Description: Use 'putchar' function to print the alphabet lowercase.
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
