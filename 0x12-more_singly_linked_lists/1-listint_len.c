#include "lists.h"
/**
 * listint_len - number of elements in a linked listint_t list
 * @h: points to start of list
 * Return: length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node;

	for (node = 0; h != NULL; node++)
	{
		h = h->next;
	}
	return (node);
}
