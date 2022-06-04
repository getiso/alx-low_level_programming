#include <stdio.h>

/**
 * main - writ program that print the alphabet in lowercase
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
