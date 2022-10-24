#include "main.h"

/**
 * swap_int - swap the value of two integer
 * @a: int a
 * @b: int b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int m = *b;
	int n = *a;

	*a = m;
	*b = n;
}
