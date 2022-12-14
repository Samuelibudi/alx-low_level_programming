#include "lists.h"

/**
 * add_nodeint - Function adds a new node at the beginning of list.
 * @head: head of list
 * @n: number of elements.
 * Return: Address of new element. Null if failed.
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

	return (*head);
}
