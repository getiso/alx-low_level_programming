#include "main.h"
/**
 * test - tests wildcard is match
 * @s5: string to compare
 * @s6: wildcard match
 * @r5:first spot to check
 * @r6: first spot wildcard comparison
 * Return: match or not
 */
char *test(char *s5, char *s6, char *r5, char *r6)
{
	if (*s6 == '*' || (*s5 == '\0' && *s6 == '\0'))
		return (r5);
	else if (*s5 != *s6)
		return (wildcard(s5, r6));
	else
		return (test(s5 + 1, s6 + 1, r5, r6));
}
/**
 * wildcard - check wildcard
 * @s3: string to check
 * @s4: string to check
 * Return: check s3 matched s4
 */
char *wildcard(char *s3, char *s4)
{
	if (*s3 != *s4)
	{
		if (*s3 == '\0')
			return (wildcard(s3 + 1, s4));
	}
	return (test(s3 + 1, s4 + 1, s3, s4));
}
/**
 * wildcmp - compare two strings
 * @s1: first stri
 * @s2: second string
 *
 * Return: 1 if string match or 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	char *p;

	if (*s2 == '*' && *(s2 + 1) == '\0')
		return (1);
	else if (*s2 == '*' && *(s2 + 1) == '*')
		return (wildcmp(s1, s2 + 1));
	else if (*s2 == '*')
	{
		p = wildcard(s1, s2 + 1);
		if (p == 0)
			return (0);
		return (wildcmp(p + 1, s2 + 2));
	}
	else if (*s1 != *s2)
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (wildcmp(s1 + 1, s2 + 1));
}