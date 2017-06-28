#include "lists.h"
/**
 * add_nodeint - adds a new node at beginning of linked list
 * @head: start of a list
 * @n: value being stored in new node
 * Return: address of element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
