#include "function_pointers.h"

/**
 * int_index - checks for an integer
 * @cmp:pointer to the function to be used to compare value
 * @array: array to test
 * @size: number of elements in array
 *
 * Return: 0 if no element matches
 * -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
