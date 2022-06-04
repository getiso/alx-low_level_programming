#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - writ program that print the alphabet in lowercase
 * Return: 0
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
