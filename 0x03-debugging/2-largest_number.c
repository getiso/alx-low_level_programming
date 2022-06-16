#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
<<<<<<< HEAD
int largest_number(int a, int b, int c)
{
	int largest;
	
	if (a >= b && a > c) /*add = sign*/
	{
		largest = a;
	}
	else if (b >= a && a >= c) /*add = sign*/
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	
	return (largest);
=======

int largest_number(int a, int b, int c)
{
    int largest;

    if (a >= b && a > c) /*add = sign*/
    {
        largest = a;
    }
    else if (b >= a && a >= c) /*add = sign*/
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
>>>>>>> eb8aac80b6ad02e8403279e7bea76c4c7789be88
}
