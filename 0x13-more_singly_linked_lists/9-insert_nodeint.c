#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at position
 * @head: pointer to first node
 * @idx: position for node to be inserted
 * @n: data to bbe iserted
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;
	unsigned int i = 0;

	if (head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		ptr = *head;
		for (; i < idx - 1 && ptr != NULL; i++)
		ptr = ptr->next;
	if (ptr == NULL)
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
