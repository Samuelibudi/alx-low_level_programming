#include "lists.h"

/**
 * free_listint2 - function that frees a linked list.
 * @head: head of a list.
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *tp;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tp = current) != NULL)
		{
			current = current->next;
			free(tp);
		}
		*head = NULL;
	}
}
