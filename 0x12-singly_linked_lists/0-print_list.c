#include "lists.h"


size_t print_list(const list_t *h){
    size_t output;

    output = 0;
    while (h != NULL)
    {
        if (h->str != NULL)
        {
            printf("[%d] %s\n", h->len, h->str);
        } else {
            printf("[0] (nill)\n");
        }
        h = h->next;
        output++;        
    }
    return (output);
}