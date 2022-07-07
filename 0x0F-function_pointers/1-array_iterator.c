#include "function_pointers.h"

/**
 * array_iterator - function that executes a function on an array
 * @array: pointer to array to be iterated
 * @size: number of elements in array
 * @action: pointer to function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
