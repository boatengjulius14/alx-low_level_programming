#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *elem;

	if (!ht || !strcmp(key, "") || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] && !strcmp(ht->array[index]->key, key))
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
		return (1);
	}

	elem = malloc(sizeof(hash_node_t));
	if (!elem)
		return (0);
	elem->key = strdup(key);
	elem->value = strdup(value);
	elem->next = ht->array[index];
	ht->array[index] = elem;

	return (1);
}
