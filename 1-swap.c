#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: integer to swap
 * @b: integer to swap
 *
 * Return: no thing
 *
*/
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
