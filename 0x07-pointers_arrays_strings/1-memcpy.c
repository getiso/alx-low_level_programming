#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of copy
 * @src: source to copy
 * @n: number of bytes copy from memory area
 * Return: pointer to dest
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
