#include "hash_tables.h"

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

	size = ht->size;
	index = key_index((unsigned char *)key, size);
	if (ht->array[index] != NULL)
		return (ht->array[index]->value);

	return (NULL);
}

