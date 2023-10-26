#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: prints all single digit numbers with base 10
 * Return: always 0 when successful
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
