#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: the output and return
 * @b: the input string
 * @n: the number of bytes
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n)
	{
		s[count] = b;
		count++;
	}
	return (s);
}
