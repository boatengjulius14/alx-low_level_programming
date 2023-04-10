#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp1 = NULL, *tmp2, *elem;
	unsigned int i = 0;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		elem = ht->array[i];
		if (elem && elem->next == NULL)
		{
			free(elem->key);
			free(elem->value);
			free(elem);
			continue;
		}
		else if (elem && elem->next != NULL)
		{
			for (tmp2 = elem; tmp2; tmp2 = tmp2->next)
			{
				if (tmp1)
				{
					free(tmp1->key);
					free(tmp1->value);
					free(tmp1);
				}
				tmp1 = tmp2;
			}
		}
	}
	if (tmp1 != NULL)
	{
		free(tmp1->key);
		free(tmp1->value);
		free(tmp1);
	}
	if (ht->array)
		free(ht->array);
	free(ht);
}
