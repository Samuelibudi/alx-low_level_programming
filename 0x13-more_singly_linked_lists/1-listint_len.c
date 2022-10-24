#include "lists.h"

/**
 * listint_len - function returns length of a list.
 * @h: list head.
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
