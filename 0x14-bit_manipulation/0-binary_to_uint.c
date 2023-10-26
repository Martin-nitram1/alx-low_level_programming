#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned in
 * @b: pointer to number being converted
 *
 * Return: the unsigned int
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int j;
	int len, base;

	if (!b)
		return (0);

	j = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base = 1; len >= 0; len--, base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			j += base;
		}
	}

	return (j);
}
