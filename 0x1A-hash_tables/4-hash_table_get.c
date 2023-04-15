#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
/**
  * hash_table_get - find the value associated with a key
  * @ht: hash table which may contains the value we look for
  * @key: character string
  *
  * Return: the value associated with element
  * or NULL if key couldn't be found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, size;
	hash_node_t *ptr;

	if (ht == NULL)
		return (NULL);

	size = ht->size;
	index = key_index((unsigned char *)key, size);
	if (ht->array[index] != NULL)
	{
		if (ht->array[index]->next == NULL)
		{
			return (ht->array[index]->value);
		}
		else
		{
			ptr = ht->array[index];
			while (ptr != NULL)
			{
				/**
				 * Collision occure so we have to traverse through
				 * the list to get the value associated with a given key
				 */
				if (strcmp(ptr->key, key) == 0)
				{
					return (ptr->value);
				}
				ptr = ptr->next;
			}
		}
	}

	return (NULL);
}

