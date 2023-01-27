#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to node
 * @str: string to be copied
 * Return: pointer the address of newly created node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int _len = 0;

	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (NULL);
	while (str[_len])
		_len++;
	tmp->str = strdup(str);
	tmp->len = _len;
	tmp->next = *head;
	*head = tmp;

	return (*head);
}
