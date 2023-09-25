#include "lists.h"

/**
 * pop_listint - function that delete head node
 * @head: pointer to point to head
 * Return: always 0
 */

int pop_listint(listint_t **head)
{
listint_t *popped;
int con;

if (*head == NULL)
return (0);

popped = *head;
con = popped->n;
free(popped);

*head = (*head)->next;
return (con);

}
