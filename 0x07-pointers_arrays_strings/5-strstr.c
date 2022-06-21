#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to check
 * @needle: substring to find
 * Return: pointer to the beginning of the located substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int x = 0, y = 0;

	while (haystack[x])
	{
		while (needle[y] && (haystack[x] == needle[0]))
		{
			if (haystack[x + y] == needle[y])
				y++;
			else
				break;
		}
		if (needle[y])
		{
			x++;
			y = 0;
		}
		else
			return (haystack + x);
	}
	return (0);
}
