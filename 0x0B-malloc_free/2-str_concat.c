#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: concatenated s2 followed s1
 */
char *str_concat(char *s1, char *s2)
{
	int x1, x2;
	int x, y;
	char *s;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	x1 = 0, x2 = 0;
	while (*(s1 + x1))
		x1++;
	while (*(s2 + x2))
		x2++;
	
	s = malloc(sizeof(char) * (x1 + x2 + 1));
	
	if (s == 0)
		return (0);
	
	for (x = 0; x < x1; x++)
		*(s + x) = *(s1 + x);
	for (x = 0, y = x1; x <= x2; y++, x++)
		*(s + y) = *(s2 + x);
	return (s);
}
