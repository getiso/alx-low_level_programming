#include <stdio.h>

/**
 * main - main block
 * Description: Use 'putchar' to print lower then upper alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	b = 'A';

	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n);

	return (0);
}
