#include <stdlib.h>
#include "main.h"

/**
 **_calloc - allocates memory for an array using malloc
 *@nmemb: the number of elements
 *@size: the sizein bytes of each
 *
 * *Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i < (nmemb * size))
	{
		*((char *)(ptr) + i) = 0;
		i++;
	}

	return (ptr);
}

