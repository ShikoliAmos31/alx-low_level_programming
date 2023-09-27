#include "lists.h"
/**
 * free_listint_safe -frees a list
 * @h: pointer to the first node
 * Return: size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	for (; *h; len++)
	{
		diff = (*h)->next - *h;
		if (diff <= 0)
		{
			free(*h);
			*h = NULL;
			break;
		}
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}
	return (len);
}
