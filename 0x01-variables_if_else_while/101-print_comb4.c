<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: 0 
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = i; j < 58; j++)
		{
			for (k = j; k < 58; k++)
			{
				if (i == j || j == k || i == k)
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);

				if (i == 55 && j == 56 && k == 57)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: 0 
 */

int main(void)
{

	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = i; j < 58; j++)
		{
			for (k = j; k < 58; k++)
			{
				if (i == j || j == k || i == k)
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);

				if (i == 55 && j == 56 && k == 57)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
>>>>>>> e5acc0249d3c79e4851d48c7a2ba113a2359f91d
