#include "hash_tables.t"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Author: Daniel Wangechi
 *
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int j;

	hash_table = maloc(sizeof(hash_table_t));
	if (hash_table_t == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (j = 0; j < size; j++)
		hash_table->array[j] = NULL;
	return (hash_table);
}
