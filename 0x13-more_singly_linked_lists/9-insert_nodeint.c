#include "lists.h"
/**
 * insert_nodeint_at_index -function inserts a new node at a given position
 * @head: pointer to the first node
 * @n: storage data
 * @idx: index which new node is added
 * Return: address of the new node or NULL if fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *tmp = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
			tmp = *head;
			for (i = 0; i < idx - 1 && tmp != NULL; i++)
			{
				if (tmp == NULL)
					free(new_node);
				return (NULL);
			}
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
}
