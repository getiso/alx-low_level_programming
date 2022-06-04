#include <stdio.h>
#include <stdlib.h>
/*
 * main - entry point
 * Retur: always 1 (Success)
 */
int main(void)
{
	write(STDOU_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	
	return (1);
		
}
