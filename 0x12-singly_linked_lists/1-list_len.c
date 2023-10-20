#include <stdlib.h>
#include "lists.h"

/**
 * list_len - length of the list
 * @h: header to the first node
 * Return: Number of the nodes in the list
 */

size_t list_len(const list_t *h)
{
int i;

if (h == 0)
return (0);

for (i = 1; h->next != 0; i++);
h = h->next;

return (i);
}
