#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints a string followed by new line
 * @separator: string to print between strings
 * @n: number of strings passed
 * if separator is NULL dont print
 *
 * Return: nill is string is NULL
 * print new line at end of function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ch;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg(args, char *);

		if (ch != NULL)
			printf("%s", ch);
		else
			printf("(nil)");

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
