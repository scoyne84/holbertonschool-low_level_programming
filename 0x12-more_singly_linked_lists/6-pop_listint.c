#include "lists.h"
/**
 * pop_listint - deletes the head node of listint_t
 * @head: start of a linked list
 * Return: the head node's data or 0
 */
int pop_listint(listint_t **head)
{
	int values;
	listint_t *node;

	if (*head == NULL)
	{
		return (0);
	}
	node = *head;
	values = node->n;
	*head = node->next;
	free(node);
	return (values);
}
