#include "lists.h"
/**
 * free_list - free a list_t list
 * @head: pointer to start of list
 * Return: void.
 */

void free_list(list_t *head)
{
        list_t *node;

        while (head != NULL)
        {
                node = head;
                head = head->next;
                free(node);
        }
}
