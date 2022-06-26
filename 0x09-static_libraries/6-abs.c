#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: parameter
 * Return: the absolute value
 */

int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
