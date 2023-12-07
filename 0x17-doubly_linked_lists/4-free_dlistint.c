#include "lists.h"
/**
 * free_dlistint -function that frees a dlistint_t list
 * @head: head of the node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next_node;

	if (head == NULL)
		return;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
