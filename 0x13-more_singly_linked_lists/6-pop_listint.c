#include "lists.h"

/**
 * pop_listint - function to delete the head node in the linked list
 * @head: the pointer to the linked list
 *
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{

listint_t *temp;
int i;

if (!head || !*head)
return (0);

i = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (i);
}

