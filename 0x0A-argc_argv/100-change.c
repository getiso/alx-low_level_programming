#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins
 * @argc: number of arguments passed
 * @argv: argument vector of pointer
 * Return: 0 if no error or 1
 */
int main(int argc, char *argv[])
{
	int a, n = 0, x, y;
	int ch[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	if (a <= 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		for (x = 0; x < 5; x++)
		{
			y = a / ch[x];
			a -= y * ch[x];
			n += y;
			if (a == 0)
				break;
		}
	}
	printf("%d\n", n);
	return (0);
O[O}
