#include "lists.h"

/**
 *list_len - returns number of elements in list_t
 *@list_- a singly lisked list
 *@h: pointer to the linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
