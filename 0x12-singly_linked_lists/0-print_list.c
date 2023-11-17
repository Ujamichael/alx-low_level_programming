#include "lists.h"
/**
 * print_list - function to print all element of list list_t
 * @h: pointer to list
 * Return: element of list
 */
size_t print_list(const list_t *h)
{
	size_t i;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		i++;
		h = h->next;
	}
	return (i);
}
