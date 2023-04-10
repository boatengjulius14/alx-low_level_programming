#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int flag = 0;

	if (!ht)
		return;

	i = 0;
	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		if (!tmp)
		{
			i++;
			continue;
		}
		if (flag == 1)
		{
			printf(", ");
			flag = 0;
		}
		if (tmp->next)
		{
			while (tmp)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				flag = 1;
			}
		}
		else
			printf("'%s': '%s'", tmp->key, tmp->value);
		i++;
		flag = 1;
	}
	printf("}\n");
}
