#include "lists.h"

/**
 * listint_len - return the number of elements in a linked list
 * @h: head pointer pointing to first node
 * Return: number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t it = 0;

	while (h)
	{
		it++;
		h = h->next;
	}
	return (it);
}
