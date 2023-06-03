#include "main.h"

/**
 * _islower - check for lowercase character
 * Return: 1 if char is lowercase, otherwise 0
 * @c - checks the character
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
