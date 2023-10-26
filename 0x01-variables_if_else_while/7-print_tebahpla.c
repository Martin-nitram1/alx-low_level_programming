#include <stdio.h>
/**
 * main - entry point
 * Description:prints the reverse alphabet in lowercase
 * Return: always 0 when successfull
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
