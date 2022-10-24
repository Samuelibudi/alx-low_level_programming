#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node.
 * @head: head of list
 * @index: index of the node.
 *
 * Return: nth node. returns NULL if not present.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}
