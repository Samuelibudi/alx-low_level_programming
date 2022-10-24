#include "lists.h"

/**
 * free_listint - function frees linked list.
 * @head: head of list.
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *tp;

	while ((tp = head) != NULL)
	{
		head = head->next;
		free(tp);
	}
}
