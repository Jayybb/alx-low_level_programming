#include "lists.h"

/**
 * delete_nodeint_at_index -  function that deletes the node at index
 * @head: pointer to the linked list
 * @index:  index of the node that should be deleted
 * Return: Returns: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *current = 0;
unsigned int k = 0;

if (*head == 0)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}

while (k < index - 1)
{
if (!temp || !(temp->next))
return (-1);
temp = temp->next;
k++;
}


current = temp->next;
temp->next = current->next;
free(current);

return (1);
}
