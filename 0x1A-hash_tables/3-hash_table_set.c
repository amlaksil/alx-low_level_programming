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

	if (ht == NULL)
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
		strcpy(ptr->key, (char *)key);
		strcpy(ptr->value, (char *)value);
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

	ptr = h->array[dx];

	if (strcmp(h->array[dx]->key, key) == 0)
	{
		/* The key is already present so we have to update its content */
		h->array[dx]->value = malloc(strlen(v) + 1);
		if (h->array[dx]->value == NULL)
			return (0);

		strcpy(h->array[dx]->value, (char *)v);

		return (1);
	}
	collied = malloc(sizeof(hash_node_t));
	if (collied == NULL)
		return (0);

	collied->key = malloc(strlen(key) + 1);
	if (collied->key == NULL)
		return (0);

	collied->value = malloc(strlen(key) + 1);
	if (collied->value == NULL)
		return (0);

	strcpy(collied->key, key);
	strcpy(collied->value, v);
	collied->next = ptr;
	h->array[dx] = collied;
	ptr = h->array[dx];

	return (1);
}
