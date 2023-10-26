#include "main.h"
/**
 * swap_int- swaps the values of two intgers with pointers
 * @a: integer being swapped
 * @b: integer being swapped
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
