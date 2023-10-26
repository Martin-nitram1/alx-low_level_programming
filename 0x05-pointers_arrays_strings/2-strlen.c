#include "main.h"
#include <string.h>
/**
 * _strlen- returns the size of a string
 * @s: string being checked
 * Return: size of the string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
