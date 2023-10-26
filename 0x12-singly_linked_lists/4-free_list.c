#include "lists.h"

/**
* free_list - frees a list_t list
* @head: pointer to head node
*
* Return: no return
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(tmp->str);
		head = head->next;
		free(tmp);
	}
}
