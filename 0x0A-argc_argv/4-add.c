#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - test the string is number
 * @s: string to check
 * Return: 1 if s is number or 0 else
 */
int is_number(char *s)
{
	if (s[0] == '\0')
		return (1);
	if (!isdigit(s[0]))
		return (0);
	else
		return (is_number(s + 1));
	return (1);
}
/**
 * main - add positive numbers
 * @argc: number of arguments
 * @argv: argument vector of pointer
 * Return: 0 if no number, 1 if not digit
 */
int main(int argc, char *argv[])
{
	int a = 0, x = 1;
	long y = 0;

	while (x < argc && a == 0)
	{
		if (is_number(argv[x]))
			y += atol(argv[x++]);
		else
			a = 1;
	}
	if (a)
		printf("Error\n");
	else
		printf("%ld\n", s);
	return (a);
}
