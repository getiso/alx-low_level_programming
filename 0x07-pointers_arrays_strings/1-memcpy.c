#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination to copy
 * @src: source
 * @n: copies n bytes from memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		*(dest + x) = *(src + x);
		x++;
	}
	return (dest);
}
