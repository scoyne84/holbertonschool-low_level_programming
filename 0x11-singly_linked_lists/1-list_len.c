#include "lists.h"

/**                                                                                                                                                          
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list of data
 * Return: number of elements in list                                                                                                                        
 */
size_t list_len(const list_t *h)
{
        unsigned int y;

        for (y = 0; h != NULL; y++)
        {
                h = h->next;
        }
        return (y);
}
