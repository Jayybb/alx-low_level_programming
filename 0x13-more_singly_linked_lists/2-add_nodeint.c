#include "lists.h"

/**
 * add_nodeint - add node to the start of the linked list
 * @head: header pointer
 * @n: data to add in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)

{
listint_t *new node;
new node = malloc(sizeof(listint_t));
if (!new node)
return (0);
new node->n = n;
new node->next = *head;
*head = new node;

return (new node);
}
