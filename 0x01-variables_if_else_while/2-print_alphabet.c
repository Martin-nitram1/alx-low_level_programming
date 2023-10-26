#include <stdio.h>

/**
 * main-entry point
 * Description: lists all letts of alphabet in lowercase
 * Return: always (0) when successful
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
