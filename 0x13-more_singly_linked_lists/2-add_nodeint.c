#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that a anew node at the beginning of list
 * @head: pointer to pointer of head
 * @n: data to be insert
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
