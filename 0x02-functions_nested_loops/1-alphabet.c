#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
