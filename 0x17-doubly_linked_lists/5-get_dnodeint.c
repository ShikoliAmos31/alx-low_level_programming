#include "lists.h"
/**
 * get_dnodeint_at_index -function that returns the nth node of a linked list
 * @head: the first node
 * @index: index of the node to be returned
 * Return: NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i < index; i++)
	{
		head = head->next;
	}
	return ((i == index) ? head : NULL);
}
