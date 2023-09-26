#include "lists.h"
/**
 * get_nodeint_at_index -returns the nth node of the linked list
 * @head: pointer of the first node
 * @index: index of the returned node
 * Return: pointer to the node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
	head = head->next;
	}
	return (head);
}
