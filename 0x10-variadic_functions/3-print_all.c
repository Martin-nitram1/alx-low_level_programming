#include "variadic_functions.h"
#include <stdio.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
