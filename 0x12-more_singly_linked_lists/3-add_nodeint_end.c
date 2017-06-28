#include "lists.h"
/**
 * add_nodeint_end - adds new node at end of linked list
 * @head: start of a list
 * @n: value from node
 * Return: address of element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *old;
	listint_t *new;

	old = *head;
	while (old && old->next != NULL)
	{
		old = old->next;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (old)
	{
		old->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
