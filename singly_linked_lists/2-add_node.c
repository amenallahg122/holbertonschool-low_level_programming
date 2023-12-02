#include "lists.h"
/**
 * add_node - adds a node at the start of the list
 * @head: the head
 * @str: data
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);

	new->next = *head;
	*head = new;
	return (new);
}
