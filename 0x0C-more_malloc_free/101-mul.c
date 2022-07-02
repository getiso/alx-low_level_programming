#include "main.h"
#include <stdlib.h>

/**
 * _print - moves a string 
 * @str: string to move
 * @l: size of string
 * Return: void
 */
void _print(char *str, int l)
{
	int x, y;

	x = 0;
	y = 0;
	while (x < l)
	{
		if (str[x] != '0')
			y = 1;
		if (y || x == l - 1)
			_putchar(str[x]);
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
	int y, z, mul, mulrem, add, addrem;

	mulrem = 0;
	addrem = 0;
	for (y = num_index, z = dest_index; y >= 0; y--, z--)
	{
		mul = (n - '0') * (num[y] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[z] - '0') + (mul % 10) + addrem;
		addrem = add /10;
		dest[z] = add % 10 + '0';
	}
	for (addrem += mulrem; z >= 0 && addrem; z--)
	{
		add = (dest[z] - '0') + addrem;
		addrem = add / 10;
		dest[z] = add % 10 + '0';
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
	int x, y;

	for (x = 1; x < 3; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			if (av[x][y] < '0' || av[x][y] > '9')
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
void init(char *str, int l)
{
	int x;

	for (x = 0; x < l; x++)
		str[x] = '0';
	str[x] = '\0';
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
	init(a, ln - 1);
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
