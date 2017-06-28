#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to head
 * @str: pointer to string
 * Return: Address of new element. NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int x;

	for (x = 0; str[x]; x++)
		;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->next = *head;
	new->len = x;
	*head = new;
	return (*head);
}
