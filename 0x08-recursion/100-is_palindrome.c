#include "main.h"

/**
 * string_len - return length of string
 * @str: string to check
 * Return: length of string
 */
int string_len(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + string_len(str + 1));
}
/**
 * check_palindrome - checks string is a palindrome
 * @l: left hand index
 * @r: right hand index
 * @p: palindrome
 * Return: 1 if palindrome or 0 if not
 */
int check_palindrome(int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[l] != p[r])
		return (0);
	else
		return (check_palindrome(l + 1, r - 1, p));
}
/**
 * is_palindrome - check if astring is palindrome or not
 * @s: string to check
 * Return: 1 if palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int i;
	i = string_len(s) - 1;
	return (check_palindrome(0, i, s));
}
