#include "lists.h"
/**
 * find_listint_loop -finds the loop in a linked lists
 * @head: the first node
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (!head)
		return (NULL);

	for (slow = head; slow != NULL; slow = slow->next)
	{
		for (fast = slow; fast != NULL; fast = fast->next)
		{
			if (slow == fast)
			{
				slow = head;
				while (slow != fast)
				{
						slow = slow->next;
						fast = fast->next;
				}
					return (fast);
				}
			}
		}
	return (NULL);
}
