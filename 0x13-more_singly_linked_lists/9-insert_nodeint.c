nclude "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: head of a list.
 * @idx: index of the list where new node is to be inserted.
 * @n: integer element.
 * Return: address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		i = 0;
		while (i < idx - 1 && h != NULL)
		{
			h = h->next;
			i++;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}
	return (new);
}
