#include "hash_tables.h"

/**
 * hash_table_create - www
 * @size: ssss
 * Return: jjj
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);

	table = calloc(1, sizeof(hash_table_t));
	if (size == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t));
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
