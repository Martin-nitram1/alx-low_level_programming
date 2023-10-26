#include <stdio.h>
/**
 * main - entry point
 * Description: prints all single digits with base 10
 * Return: alwasy 0 when successful
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
