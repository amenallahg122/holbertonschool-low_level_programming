#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head
 * @index: int
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (index == count)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
