#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
 const listint_t *tortoise, *hare;
 size_t nodes = 1;

 if (head == NULL || head->next == NULL)
 return (0);

 tortoise = head->next;
 hare = (head->next)->next;

 while (hare)
 {
 if (tortoise == hare)
 {
 tortoise = head;
 while (tortoise != hare)
 {
 nodes++;
 tortoise = tortoise->next;
 hare = hare->next;
 }

 tortoise = tortoise->next;
 while (tortoise != hare)
 {
 nodes++;
 tortoise = tortoise->next;
 }

 return (nodes);
 }

 tortoise = tortoise->next;
 hare = (hare->next)->next;
 }

 return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t new_n;

	tmp_n = head;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		counter++;
		tmp_n = tmp_n->next;
		l_n = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (tmp_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
				return (counter);
			}
			l_n = l_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
