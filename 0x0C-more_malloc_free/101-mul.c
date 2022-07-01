#include "main.h"
#include <stdlib.h>

/**
 * print - moves a string 
 * @s: string to move
 * @sz: size of string
 * Return: void
 */
void print(char *str, int l)
{
	int x, y;

	x = 0;
	y = 0;
	while (x < l)
	{
		if (str[x] != '0')
			y = 1;
		if (y || x == l -1)
			_putchar(s[x]);
		x++;
	}
	_putchar('\n');
	free(str);
}
/**
 * mul - multiplies a char with a string
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index
 * @dest: destination of multiplication
 * @dest_index: highest index
 * Return: pointer to dest or NULL
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mulrem, add, addrem;

	mulrem = 0;
	addrem = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addrem;
		addrem = add /10;
		dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}
/**
 * check_digit - checks arguments to digit
 * @av: pointer to arguments
 * Return: 0 for digits, 1 if not digit
 */
int check_digit(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}
	return (0);
}
/**
 * init - initialize string
 * @str: string to initialize
 * @l: length of string
 * Return: void
 */
void inits(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
		s[i] = '0';
	str[i] = '\0';
}
/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: zero or exit status
 */
int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_digit(argv))
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	inits(a, ln - 1);
	for (ti = l2 - 1, i = 0; ti >= 0; ti--; i++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				_putchar(e[ti]);
			free(a);
			exit(98);
		}
	}
	_print(a, ln - 1);
	return (0);
}
