#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 100; num++)
	{
		putchar((num % 10) + '0');
		if (num != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
