#include "function_pointers.h"

/**
 * print_name - This prints a name.
 * @name: This is the name to be printed.
 * @f: A pointer to a function that prints a name.
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
