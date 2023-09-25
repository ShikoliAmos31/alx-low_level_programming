#include "lists.h"
/**
 * pop_listint -deletes the head node of a linked list
 * @head: pointer to the node
 * Return: deleted data inside the element
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (n);
}

