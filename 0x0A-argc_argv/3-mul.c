#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector of pointer
 *
 * Return: 0 if no error, else
 */
int main(int argc, char *argv[])
{
	int x, y, result;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;
	printf("%d\n", result);
	return (0);
}
