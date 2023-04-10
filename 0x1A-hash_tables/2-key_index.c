#include "hash_tables.h"

/**
  * key_index - finds at what index the given key is located
  * @key: the key to be given
  * @size: the size of hash table
  *
  * Return: the index at which the key/value pair
  * stored in the array of hash table
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = (hash % size);

	return (index);
}
