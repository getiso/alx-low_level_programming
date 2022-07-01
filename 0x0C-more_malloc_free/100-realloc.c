#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using 
 * malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size of ptr
 * @new_size: size of newly allocated
 * Return: pointer to new memory or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *e;
	unsigned int x, max = new_size;
	char *olde = ptr;

	if (ptr == NULL)
	{
		e = malloc(new_size);
		return (e);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	e = malloc(new_size);
	if (e == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (x = 0; x < max; x++)
		e[x] =olde[x];
	free(ptr);
	return (e);
}
