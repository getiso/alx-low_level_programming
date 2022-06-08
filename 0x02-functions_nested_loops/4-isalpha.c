#include "main.h"

/**
 * _isalpha: check the character
 * @c: check c is character or not
 * Return: return 1 if c is letter or return 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
