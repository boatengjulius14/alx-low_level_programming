#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @head: pointer to pointer to first node
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **head)
{
	int diff, count;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	for (count = 0; *head; count++)
	{
		diff = *head - (*head)->next;
		if (diff > 0)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		else
		{
			free(*head);
			count++;
			break;
		}
	}
	*head = NULL;
	return (count);
}
