#include "lists.h"
/**
 * free_listint2 - free linked list and set ead pointer to null
 * @head: pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (!*head)
	{
		*head = (*head)->next;
	}
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		*head = NULL;
	}
}
