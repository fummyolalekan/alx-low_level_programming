#include "main.h"

/**
 * swap_int - two integers that swaps value
 * @a: parameter 1
 * @b: parameter 2
 */

void swap_int(int *a, int *b)
{
	int alp;

	alp = *a;
	*a = *b;
	*b = alp;
}
