#include <stdio.h>

/**
 * main - check the code
 * @argv: This is the character to print
 * @argc: This is the character to print
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
