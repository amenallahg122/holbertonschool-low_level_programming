#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, l;
	char *p;

	i = l = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
	{
		return (NULL);
	}
	while (i < l)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
