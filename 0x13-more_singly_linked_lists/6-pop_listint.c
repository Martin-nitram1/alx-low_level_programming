#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t
* @head: pointer to pointer to head
*
* Return: data from new head node
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int delete = 0;

	if (!(*head))
		return (delete);

	tmp = *head;
	delete = tmp->n;
	*head = (*head)->next;
	free(tmp);

	return (delete);
}
