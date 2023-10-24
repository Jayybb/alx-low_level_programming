#include "lists.h"

/**
 * sum_listint - sum of data in the linked list
 * @head: the pointer to the linked list
 *
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
int i = 0;
listint_t *temp = head;

while (temp)
{
i += temp->n;
temp = temp->next;
}
return (i);
}
