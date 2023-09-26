#include "lists.h"
/**
 * sum_listint - returns the sum of all the data of the linked list
 * @head: pointer to the first node
 * Return: sum of the integers in the linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
