#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;

	}

	a = 'A';
	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
