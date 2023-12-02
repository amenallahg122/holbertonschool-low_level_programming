#include "lists.h"
/**
 * free_list - frees list
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *p;

	p = head;

	while (p != NULL)
	{
		free(p->str);
		free(p);
		p = p->next;
	}
}
