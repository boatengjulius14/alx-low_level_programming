#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to pointer to first node
 * @str: string to copied
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tmp;
	unsigned int _len;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	_len = 0;
	while (str[_len])
		_len++;
	node->len = _len;
	node->next = NULL;

	if (!*head)
		*head = node;
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
	}
	return (*head);
}
