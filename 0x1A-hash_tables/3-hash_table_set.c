#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
  * hash_table_set - adds element to the hash table
  * @ht: a pointer points to the array of hash table
  * @key: the key it can not be an empty string
  * @value: the value associated with the key
  * It must be duplicated and it can also be empy string
  *
  * Return: 1 if it succeeded, 0 otherwise
  * In case of collision, add the new node at the
  * beginning of the list
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size;
	hash_node_t *ptr;

	if (key == NULL)
		return (0);

	size = ht->size;
	index = key_index((unsigned char *)key, size);

	if (ht->array[index] == NULL)
	{
		ptr = malloc(sizeof(hash_node_t));
		if (ptr == NULL)
			return (0);

		ptr->key = malloc(strlen(key) + 1);
		if (ptr->key == NULL)
			return (0);

		ptr->value = malloc(strlen(value) + 1);
		if (ptr->value == NULL)
			return (0);

		ht->array[index] = ptr;
		ptr->key = (char *)key;
		ptr->value = (char *)value;
		ptr->next = NULL;
	}
	else
	{
		handle_collision(ht, (char *)key, (char *)value, index);
	}
	return (1);
}

/**
 * handle_collision - handles collision by adding the items
 * at the beginning of the list
 * @h: a pointer points to the array of hash table
 * @key: the key it can not be an empty string
 * @v: the value associated with the key
 * @dx: an id number for the given key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int handle_collision(hash_table_t *h, char *key, char *v, unsigned long int dx)
{
	hash_node_t *ptr;
	hash_node_t *collied;

	collied = malloc(sizeof(hash_node_t));
	if (collied == NULL)
		return (0);

	ptr = h->array[dx];
	collied->key = malloc(strlen(key) + 1);
	if (collied->key == NULL)
		return (0);

	collied->value = malloc(strlen(key) + 1);
	if (collied->key == NULL)
		return (0);

	collied->key = key;
	collied->value = v;
	collied->next = ptr;
	ptr = collied;

	return (1);
}
