#include "lists.h"

/**
 * add_nodeint_end - function adds a node at the end.
 * @head: head of list.
 * @n: number of elements.
 * Return: Addr of new element. Null if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tp;

	(void)tp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	tp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (tp->next != NULL)
		{
			tp = tp->next;
		}
		tp->next = new;
	}
	return (*head);
}
