#include "lists.h"

/**
 * sum_listint - function returns the sum of all data in linked list.
 * @head: head of list.
 * Return: sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
