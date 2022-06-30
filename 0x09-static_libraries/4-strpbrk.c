#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: to check the string
 * @accept: for check the string
 * Return: pointer to byte in s matches one of bytes in accept or null
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
				break;
		}
		if (accept[y])
			return (s + x);
	}
	return (0);
}
