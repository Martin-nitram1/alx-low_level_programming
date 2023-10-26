#include "main.h"
/**
 * _isalpha -  checks for i s charater is letter both upper and lowercase
 * @c: the character to check
 * Return: 1 if c is a letter  0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
