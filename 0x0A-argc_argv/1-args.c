#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of arguments passed
 * @argv: argument vectory
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
