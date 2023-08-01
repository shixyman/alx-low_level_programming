#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	first = *head;
	*head = first->next;
	n = first->n;
	free(first);
	return (n);
}
