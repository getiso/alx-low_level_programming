#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: check c is letter,  lowercase or uppercase
 * Return: 1 if c is letter,  0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
