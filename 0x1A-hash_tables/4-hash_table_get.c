#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: key being searched for
 * Return: the value of the key or NULL if value is not found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (!ht || !key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[index])
		return (NULL);

	tmp = ht->array[index];
	if (!tmp->next && !strcmp(tmp->key, key))
		return (tmp->value);

	while (tmp->next)
	{
		if (!strcmp(tmp->key, key))
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
