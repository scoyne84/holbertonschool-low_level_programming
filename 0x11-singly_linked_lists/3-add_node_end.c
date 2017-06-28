#include "lists.h"
/**
 * add_node_end - adds new node at end of linked list
 * @head: start of a list
 * @n: value from node
 * Return: address of element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
        list_t *old;
        list_t *new;

        old = *head;
        while (old && old->next != NULL)
        {
                old = old->next;
        }
        new = malloc(sizeof(list_t));
        if (new == NULL)
        {
                return (NULL);
        }
        new->str = str;
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

