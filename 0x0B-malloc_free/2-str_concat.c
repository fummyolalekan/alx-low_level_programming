#include "main.h"

/**
 * str_concat -> string concatinating function
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, l = 0, k = 0;
	char *f;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;

	l = i + j;
	f = (char *)malloc(l * sizeof(char) + 1);
	if (f == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k < i)
			f[k] = s1[k];
		if (k >= i)
		{
			f[k] = s2[j];
			j++;
		}
		k++;
	}
	f[k] = '\0';
	return (f);
}
