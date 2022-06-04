#include <stdio.h>

/**
 * main -main block
 * Description: print all base64
 * Use only 'putchar' only 3 times
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	int t = 0;

	while (t < 10)
	{
		putchar(t + '0');
		t++;
	}
	
	while (a < 'g')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
