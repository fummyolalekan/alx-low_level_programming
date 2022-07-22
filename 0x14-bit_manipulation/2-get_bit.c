#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n:this is the decimal parameter
 * @index: is the index
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
