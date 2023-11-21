#include "lists.h"
/**
 * print_listint - function that prints all members of a linked list
 * @h: head pointer
 * Return: linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t i  = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
