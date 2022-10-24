#include "main.h">
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 * Return: not
 */
void swap_int(int *a, int *b);
{
	int t = *a;
	*a = *b;
	*b = t;
}
