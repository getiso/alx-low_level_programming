#include <stdio.h>

/**
 * main - main block
 * Description: print all numbers of single digit
 * You are not allowed to use any variable char type
 * only use 'putchar' to print all single digit number
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int j = 0;

	while(j < 10)
	{
		putchar(j + '0');
		j++;
	}
	putchar('\n');

	return (0);
}
