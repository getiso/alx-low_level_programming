#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first integer
 * @max: second integer
 * Return: pointer to new allocation of memory
 */
int *array_range(int min, int max)
{
	int x, l;
	int *e;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	e = malloc(sizeof(int) * l);
	if (e == NULL)
		return (NULL);
	for (x = 0; x < l; x++, min++)
	{
		e[x] = min;
	}
	return (e);
}
