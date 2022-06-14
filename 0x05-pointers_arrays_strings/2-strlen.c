#include "main.h"
#include <string.h>

/**
 * _strlen -> function to get the length of a string
 * @s: string pointer
 * Return: This returns length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
