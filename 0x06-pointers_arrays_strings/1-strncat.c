#include "main.h"

/**
 * _strncat - append src string to the dest string
 * @dest: string to append src
 * #src: string to append to dest
 * @n: largest number of bytes to append
 * Return: dest address
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = y = 0;
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
