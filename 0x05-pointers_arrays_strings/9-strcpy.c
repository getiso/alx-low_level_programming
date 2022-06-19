#include "main.h"

/**
 * *_strcpy - copies the string pointed by src
 * @dest: destomatop of copy
 * @src: source to copy
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (*(src + x))
	{
		*(dest + x) = *(src + x);
		x++;
	}
	*(dest + x) = '\0';
	return (dest);
}
