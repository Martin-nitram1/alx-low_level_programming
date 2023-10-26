#include <stdio.h>
#include <stdlib.h>
/**
 * main -entry point
 * Description: Prints the alphabet in lowercase then in uppercase
 * Return: Always (0) when successfull
 **/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
