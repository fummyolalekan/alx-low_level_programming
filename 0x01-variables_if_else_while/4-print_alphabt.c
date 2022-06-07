#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	char a ='a';

	e = 'e';
	q = 'q';

	while (a <= 'z')
	{
		if (a != e && a != q)
			putchar(a);
			a++;
	}

	putchar('\n');
	return(0);

