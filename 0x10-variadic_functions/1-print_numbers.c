#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by new line
 * @separator: string to print between numbers
 * @n: number of integers passed to function
 * if separator is null dont print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned int));

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
