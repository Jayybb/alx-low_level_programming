#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a fixed point in the linked list
 * @head: node in linked list
 * @index: index of the node in the linked list
 *
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int j = 0;
listint_t *temp = head;

while (temp && j < index)
{
temp = temp->next;
j++;
}

return (temp ? temp : NULL);
}
