#include "lists.h"

/**
 * pop_listint - Deletes the head node.
 * @head: head of list
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;
	firt_node = current->n;
	h = current->next;
	free(current);
	*head = h;

	return (first_node);
}
