#include "lists.h"

/**
 * pop_listint - function that delete head node
 * @head: pointer to point to head
 * Return: always 0
 */

int pop_listint(listint_t **head)
{
listint_t *popped;
int n;

if (*head == NULL)
return (0);

popped = *head;
n = popped->n;
free(popped);

*head = (*head)->next;
return (n);

}
