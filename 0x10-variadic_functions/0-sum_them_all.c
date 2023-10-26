#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all parameters
 * @n: number of arguments that follow
 *
 * Return: 0 if n == 0
 * sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{

	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, unsigned int);

	va_end(args);

	if (n != 0)
		return (sum);

	return (0);
}
