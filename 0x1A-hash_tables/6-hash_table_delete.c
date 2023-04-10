#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *ht1 = ht;
	hash_node_t *tmp, *prev;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			tmp = ht->array[i];
			while (tmp)
			{
				tmp = prev->next;
				free(prev->key);
				free(prev->value);
				free(prev);
				prev = tmp;
			}
		}
	}
	free(ht1->array);
	free(ht1);
}
