#include "lists.h"

size_t list_len(const list_t *h)
{
    size_t output = 0;

    while (h != NULL)
    {
        output++;
        h = h->next;
    }
    
    return (output);
}