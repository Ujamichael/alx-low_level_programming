#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prevous;
		prevous = *head;
		*head = next;
	}
	*head = prevous;
	return (*head);
}
