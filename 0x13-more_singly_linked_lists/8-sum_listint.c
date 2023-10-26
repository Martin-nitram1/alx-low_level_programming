#include "lists.h"

/**
* sum_listint - returns sum of all the data of listint_t
* @head: pointer to intial node
*
* Return: sum of all the data(n)
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
