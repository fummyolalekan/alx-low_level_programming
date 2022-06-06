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

	srand(time(0));
	n = rand() - RAND_MAX / 2; 

	if (n > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, L);
	else if (n == 0)
		printf("%s %d is %d and is 0\n", str, n, L);
	else if (n < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, L);

	return (0);
}
