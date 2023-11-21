#include "lists.h"
/**
 * add_nodeint - function that create a new node
 * @head: a double pointer pointer to the head of node
 * @n: node
 * Return: 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
