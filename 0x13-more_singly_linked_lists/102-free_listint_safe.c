#include "lists.h"

/**
 * free_list1 - free linked list
 * @head: head of list.
 *
 * Return: nothing
 */
void free_list1(listp_t **head)
{
	listp_t *tmp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - function frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	listp_t *ptr, *new, *add;
	listint_t *current;

	ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_list1(&ptr);
				return (num);
			}
		}
		current = *h;
		*h = (*h)->next;
		free(current);
		num++;
	}

	*h = NULL;
	free_list1(&ptr);
	return (num);
}
