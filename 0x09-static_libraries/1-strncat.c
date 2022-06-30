#include "main.h"

/**
 * _strncat - concatenate n bytes src string to the dest string
 * @dest: string to append src
 * @src: string to append to dest
 * @n: number of bytes to concatenate
 *
 * Return: address of des
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;
	while (*(dest + x))
		x++;
	while (y < n && *(src + y))
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	if (y < n)
		*(dest + x) = *(src + y);
	return (dest);
}
