#include "hash_tables.h"

/**
* hash_table_create- creates a hash table
*
* @size: the size of the array
*
* Return: the newly created hash_table, or Null on failure
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int index = 0;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table)
	{
		hash_table->size = size;
		hash_table->array = malloc(sizeof(hash_node_t *) * size);
		if (!hash_table->array)
		{
			free(hash_table);
			return (NULL);
		}


		while (index < size)
		{
			hash_table->array[index] = NULL;
			index++;
		}
	}

	return (hash_table);
}
