#include "function_pointers.h"
/**
 * int_index - searches for an integr
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
