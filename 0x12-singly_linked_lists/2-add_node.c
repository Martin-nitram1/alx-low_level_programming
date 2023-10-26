#include "lists.h"

/**
* _strlen - returns the length of a string
* @str: pointer to string
*
* Return: length of string
*/
int _strlen(const char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
		len++;

	return (len);
}

/**
 * *add_node - adds a new node at the beginning
 * @head: first node
 * @str: pounter to linked list
 *
 * Return: address of node or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nd;

	nd = malloc(sizeof(struct list_s));
	if (nd == NULL)
		return (NULL);

	nd->next = *head;
	nd->str = strdup(str);
	nd->len = _strlen(str);

	*head = nd;

	return (*head);
}
