#include "lists.h"

/**
 * add_node_end - function adds new node at the end of list
 * @head: head of linked list.
 * @str: string to store in loist.
 * Return: address of head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw, *tmp;
	size_t ch;

	nw = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	nw->str = strdup(str);

	ch = 0;
	while (str[ch])
		ch++;

	nw->len = ch;
	nw->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = nw;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = nw;
	}
	return (*head);
}
