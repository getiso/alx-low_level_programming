#include "main.h"

/**
 * _islower - check c is it lower or not
 * @c:is a character to check
 * Return: return 1 if c is lower return 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
