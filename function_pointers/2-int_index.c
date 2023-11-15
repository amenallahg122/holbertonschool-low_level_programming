#include "function_pointers.h"
/**
 * int_index - searches for an int
 * @array: array
 * @cmp: the action to be applied to the array
 * @size: size of the array
 * Return: int or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
