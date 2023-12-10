#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array.
 * Return:a pointer to the newly created hash table or NULL in case of error
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	if (size == 0)
	{
		return (NULL);
	}
	table = malloc(sizeof(hash_table_t));
	if (table == 0)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_table_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
