#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in array
 * @size: size of bytes of elements
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *e;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	e = malloc(nmemb * size);
	if (e == NULL)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
		e[x] = 0;
	return (e);
}
