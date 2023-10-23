#include "lists.h"

/**
  * add_nodeint_end - add node at the tail end of the linked list
  * @head: the first element in the linked list
  * @n: data to add in the linked list
  *
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)

{
listint_t *new_node;
listint_t *temp = *head;

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (0);

new_node->n = n;
new_node->next = 0;

if (*head == 0)
{
*head = new_node;
return (new_node);
}

while (temp->next)
temp = temp->next;

temp->next = new_node;

return (new_node);

}
