#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The last digit
 * Return: 0
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2; 
	num = n % 10;

	if (num > 5)
		printf("Last digit of %d is %d and is greater than 5\n", str, n, num);
	else if (num == 0)
		printf("Last digit of %d is %d and is 0\n", str, n, num);
	else if (num < 6 && num != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", str, n, num);

	return (0);
}
