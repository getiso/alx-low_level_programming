#include "main.h"

/**
 * _strcat - append src string to dest string
 * @dest: string to append src
 * @src:  string to append to dest
 * Return: address of dest
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (*(dest + x))
		x++;
	while ((*(dest + x) = *(src + y)))
	{
		x++;
		y++;
	}
	return (dest);
}
