#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of multiplication or 1
 * atio: convert a string to an int
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
