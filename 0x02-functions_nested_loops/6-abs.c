#include "main.h"
#include <stdio.h>

/**
 * _abs - write a function that computes the absolute value of an integer.
 * @x: check integer
 * Return: absolute valule of the integer
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	return (-x);
}
