#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer
 * @b:b is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if b is NULL
 * or there is one or more chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal_val = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (b[i] - '0');
	}
	return (decimal_val);
}
