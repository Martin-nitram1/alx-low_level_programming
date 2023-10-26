#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *lists all letters of the alphabet apart from 'e' and 'q'
 *Return: Always 0 when successful
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
