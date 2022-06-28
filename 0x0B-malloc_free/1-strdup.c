#include "main.h"

/**
 * _strdup - This is a  string duplicator function
 * @str: string to be dupliated
 * Return: a string pointer
 */

char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *f;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	f = (char *)malloc(i * sizeof(char) + 1);
	if (f == NULL)
		return (NULL);
	while (j < i)
	{
		f[j] = str[j];
		j++;
	}
	f[j] = '\0';
	return (f);
}
