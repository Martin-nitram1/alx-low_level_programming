#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Description: print the alphabet 10 times
 * Return: if success 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
