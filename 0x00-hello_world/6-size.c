
#include <stdio.h>
/**
 * main - size of data type
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(char));
	printf("size of an int: %ld byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(long int));
	printf("size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(long long int));
	printf("size of a float: %ld byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
