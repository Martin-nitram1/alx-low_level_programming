#include "function_pointers.h"

/**
 * print_name - prints a name
 * @f: pointer to a function that takes a pointer to a char
 * @name: pointer to a char
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		f(name);
	}


}




