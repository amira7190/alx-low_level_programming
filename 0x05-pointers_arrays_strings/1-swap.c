#include "main.h"

/**
 * swap int - swaps the values of two integers
 * using two input parameters
 *
 * @a: integer to swap
 * @b: integer to swap
 *
 * Return: no thing
 *
*/
void swap_int(int *a, int *b);
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
