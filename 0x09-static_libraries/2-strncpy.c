#include "main.h"
#include <string.h>

/**
 * _strncpy - for copying purpose
 * @dest: parameter one
 * @src: parameter two
 * @n: parameter three
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
