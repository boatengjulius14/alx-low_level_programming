#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: address of first node
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (tmp->next)
	{
		head = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = head;
	}
	free(tmp->str);
	free(head);
}
