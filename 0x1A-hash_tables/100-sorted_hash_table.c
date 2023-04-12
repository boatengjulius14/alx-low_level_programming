#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - creates and initializes a hash table
 * @size: the size of hash_table
 * Return: address to hash table or NULL upon failure
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (!ht->array)
		return (NULL);
	ht->size = size;

	while (i < size)
	{
		ht->array[i] = NULL;
		i++;
	}
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - inserts a key/value into the sorted hash table
 * @ht: hash table
 * @key: the key
 * @value: the value
 * Return: 1(success) or 0 upon failure
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	char *d_value, *d_key;
	unsigned long int idx;
	shash_node_t *node = NULL;
	shash_node_t *temp = NULL;

	if (!ht || !key || !value || !strcmp(key, ""))
		return (0);
	d_value = strdup(value);
	if (!d_value)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (!strcmp(temp->key, key))
		{
			free(temp->value);
			temp->value = d_value;
			return (1);
		}
		temp = temp->snext;
	}
	node = malloc(sizeof(shash_node_t));
	if (!node)
	{
		free(d_value);
		return (0);
	}
	d_key = strdup(key);
	if (!d_key)
	{
		free(d_value);
		free(node);
		return (0);
	}
	node->key = d_key;
	node->value = d_value;
	node->next = ht->array[idx];
	ht->array[idx] = node;
	if (!ht->shead)
	{
		node->sprev = NULL;
		node->snext = NULL;
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		node->sprev = temp;
		node->snext = temp->snext;
		if (!temp->snext)
			ht->stail = node;
		else
			temp->snext->sprev = node;
		temp->snext = node;
	}
	return (1);
}

/**
 * shash_table_get - returns the value of a key
 * @ht: hash table
 * @key: the key
 * Return: value of a given key or NULL if not found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;
	unsigned long int idx;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	temp = ht->shead;
	while (temp && strcmp(temp->key, key))
		temp = temp->snext;

	if (temp)
	return (temp->value);
	return (NULL);
}

/**
 * shash_table_print - prints the hash table using the sorted
 * linked list
 * @ht: hash table
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (!ht)
		return;
	temp = ht->shead;
	printf("{");

	while (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
		if (temp)
			printf(", ");
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - prints the hash table key/value pairs
 * in reverse order using the sorted linked list
 * @ht: hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (!ht)
		return;
	temp = ht->stail;

	printf("{");

	while (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->sprev;
		if (temp)
			printf(", ");
	}

	printf("}\n");
}

/**
 * shash_table_delete - would delete hash table.
 * @ht: hash table
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *tmp1, *tmp2;

	if (!ht)
		return;
	tmp1 = ht->shead;

	while (tmp1)
	{
		tmp2 = tmp1->snext;
		free(tmp1->key);
		free(tmp1->value);
		free(tmp1);
		tmp1 = tmp2;
	}
	free(head->array);
	free(head);
}
