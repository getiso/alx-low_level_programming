#include <stdio.h>
/**
 * main - size of data type
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long int c;

	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
