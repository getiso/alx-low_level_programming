#include "main.h"

/**
 * _strnpy - copies n bytes of src to dest string
 * @dest: string to copy
 * @src: string to be copied
 * @n: most bytes to copy
 *
 * Return: dest address
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && *(src + x))
	{
		*(dest + x) = *(src + x);
		x++;
	}
	while (x < n)
	{
		*(dest + x) = '\0';
		x++;
	}
	return (dest);
}
