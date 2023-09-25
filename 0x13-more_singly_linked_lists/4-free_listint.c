#include "lists.h"
/**
 * free_listint -frees the list
 * @head: the poi nter to the node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
