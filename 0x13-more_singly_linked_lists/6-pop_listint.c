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

con = (*head)->n;
popped = (*head)->next;
free(*head);
*head = popped;

return (con);

}
