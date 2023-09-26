#include "lists.h"

/**
 * sum_listint - function thar sum the data of list
 * @head: pointer to first node
 * Return: 0 or sum
 */
int sum_listint(listint_t *head)
{
	int sum =0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
