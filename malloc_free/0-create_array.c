#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @c: The character
 * @size: the size of the array
 * Return: NULL if size is 0 and array if not
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *array;
	array = malloc(1 * size);

	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)

		{
			array[i] = c
		}
		return (array);
	}
}
