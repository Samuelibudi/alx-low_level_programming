#include "lists.h"

/**
 * add_node - Function adds new node at the beginning of list.
 * @head: head of linked list.
 * @str: string to store in list.
 * Return: Address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nw;
	size_t ch;

	nw = malloc(sizeof(list_t));
	if (nw == NULL)
		return (NULL);

	nw->str = strdup(str);

	for (ch = 0; str[ch]; ch++)
		;

	nw->len = ch;
	nw->next = *head;
	*head = nw;

	return (*head);
}
