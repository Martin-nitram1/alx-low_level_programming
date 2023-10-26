#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * perimeter on each function in an array
 * @size: The size of an array
 * @array: array being passed
 * @action: pointer to the function needed to be used
 *
 * return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array && size > 0 && action)
	{
		for (j = 0; j < size; j++)
			action(array[j]);
	}
}
