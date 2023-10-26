#include "lists.h"

/**
* _strlen - gets length of a string
* @str: pointer to string
*
* Return: length of string
*/
int _strlen(const char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
		i++;

	return (i);
}

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: pointer to pointer to head node
* @str: string in node
*
* Return: address of new element or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *new;

	new = malloc(sizeof(struct list_s));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		end = *head;

		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}

	return (new);
}
