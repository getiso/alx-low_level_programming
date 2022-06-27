#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument passed
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *st;
	int x, y, z, l, lt;

	if (ac == 0 || av == NULL)
		return (0);
	l = 0, z = 0;
	for (x = 0; x < ac; x++)
	{
		lt = 0;
		while (av[x][lt])
			lt++;
		l += lt + 1;
	}
	st = malloc((l + 1) * sizeof(char));
	if (st == 0)
		return (0);
	for (y = 0; y < ac; y++)
	{
		lt = 0;
		while (av[y][lt])
		{
			*(st + z) = av[y][lt];
			z++;
			lt++;
		}
		*(st + z) = '\n';
		z++;
	}
	*(st + z) = '\0';
	return (st);
}
