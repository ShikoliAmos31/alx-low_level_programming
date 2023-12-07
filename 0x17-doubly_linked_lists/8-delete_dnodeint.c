#include "lists.h"
/**
 * delete_dnodeint_at_index -function that deletes the node at
 * index of a linked list
 * @head: the head of the node
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);

		return (1);
	}
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);

	return (1);
}
