#include "lists.h"
/**
 * free_listint2 -function that frees a list
 * @head: point to the node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	}

	*head = NULL;
}
