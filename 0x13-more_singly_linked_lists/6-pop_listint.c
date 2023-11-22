#include "lists.h"
/**
 * pop_listint - deletes the head of a node and return it's data
 * @head: pointer
 * Return: data
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (head == NULL)
		return (0);

	i = (*head)->next;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (i);
}
