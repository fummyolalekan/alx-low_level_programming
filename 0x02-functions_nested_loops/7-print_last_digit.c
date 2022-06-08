#include "main.h"

/**
 * print_last_digit -prints the last digit of a number
 * @n: the passed argument
 * Return:  value of the last digit
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (n < 0)
	{
		n = (-1 * n);
	}
	_putchar(x + '0');
	return (x);
}
