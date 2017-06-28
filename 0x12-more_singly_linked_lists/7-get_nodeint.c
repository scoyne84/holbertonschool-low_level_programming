#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of listint_t
 * @head: start of a linked list
 * @index: index of the node, beginning at zero
 * Return: nth node of listint_t or if node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *current;

	current = head;
	for (x = 0; x < index; x++)
	{
		if (current != NULL)
		{
			current = current->next;
		}
		else
		{
			return (NULL);
		}
	}
	if (current != NULL)
	{
		return (current);
	}
	else
	{
		return (NULL);
	}
}
