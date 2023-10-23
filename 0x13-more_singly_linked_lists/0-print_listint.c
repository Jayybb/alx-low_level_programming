#include "lists.h"

/**
 * print listint - prints all elements on the linked list
 * @h: linked list to print
 *
 * Return: the number of nodes
 *
 */
size_t print_listint(const listint_t *h)

{
size_t i;

if (h == 0)
return (0);

for (i = 0; h != 0; i++)
{
printf("%d/n", h->n);
h = h->next;
}
return (i);
}
