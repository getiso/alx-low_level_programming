#include "main.h"

/**
 * _strlen - return length of a string
 * @s: string to know its length
 * Return: length of s
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; *(s + x); x++)
		return (x);
}
