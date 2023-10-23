#include "lists.h"

/**
 * print listint - prints all elements on the linked list
 * @h: linked list to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t i = 0;

while (h)
{
printf("%d\n", h->n);
i++;
h = h->next;
}

return (i);
}

