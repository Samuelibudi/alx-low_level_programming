#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of a list
 *
 * Return: nothing.
 */
void free_list(listp_t **head)
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
 * print_listint_safe - prints a linked list.
 * @head: head of list
 *
 * Return: number of nodes in the listz.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	listp_t *ptr, *new, *add;

	ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list(&ptr);
				return (num);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num++;
	}

	free_list(&ptr);
	return (num);
}
