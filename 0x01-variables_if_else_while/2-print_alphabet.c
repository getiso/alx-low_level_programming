#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - print lowercase alphabet in alphabetical order
 *alphabeic lower character
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
