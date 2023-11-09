#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @max: max
 * @min: min
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *a, i;

	i = 0;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(((max - min + 1) * sizeof(int)) + sizeof(int));
	if (a == NULL)
		return (NULL);
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
