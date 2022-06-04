
#include <stdio.h>
/**
 * main - size of data type
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %ld bytes\n", (unsigned long)sizeof(char));
	printf("size of int: %ld bytes\n", (unsigned long)sizeof(int));
	pritnf("Size of long int: %ld bytes\n", (unsigned long)sizeof(long int));
	printf("size of long long int: %ld bytes\n", (unsigned long)sizeof(long long int));
	printf("size of float: %ld bytes\n", (unsigned long)sizeof(float));
	return (0);
}
