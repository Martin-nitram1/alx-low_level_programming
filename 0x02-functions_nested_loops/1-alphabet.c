#include "main.h"
/**
 * print_alphabet - entry point
 * Description: print alphabet in lowercase
 * Return: 0 if success
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
