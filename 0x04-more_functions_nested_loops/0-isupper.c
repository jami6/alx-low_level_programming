#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase letter
 * Return: 1 if uppercase 0 if not
 * @c: the character
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
