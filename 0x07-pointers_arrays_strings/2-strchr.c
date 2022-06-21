#include "main.h"

/**
 * _strchr - locates a character in a string
 * *s: string to check
 * *c: character to check
 * Return: return pointer to spt in s with c or null
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; *(s + x); x++)
	{
		if (*(s + x) == c)
			return (s + x);
	}
	if (*(s + x) == c)
		return (s + x);
	return (0);
}
