#include "lists.h"
/**
 * list_len - returns number of elements in a linked list
 * @h: pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
