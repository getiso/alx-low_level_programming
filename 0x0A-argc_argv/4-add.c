#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: number of arguments
 * @argv: argument vector of pointer
 * Return: 0 if no number, 1 if not digit
 */
int main(int argc, char *argv[])
{
	int a = 0, x, y;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; y < argv[x][y]; y++)
		{
			if (isdigit(argv[x][y] == 0))
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (x = 1; x < argc; x++)
	{
		a += atoi(argv[x]);
	}
	printf("%d\n", a);
	return (0);
}
