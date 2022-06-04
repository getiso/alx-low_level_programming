#include <stdio.h>

/**
 * main - main block
 * Description: Print the lower alphabet in reverse order
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');

	return (0);
}
