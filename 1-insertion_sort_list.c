#include "sort.h"

/**
 * swap - Swap position of two nodes
 * @pre: First node
 * @curr: Second node
 *
 * Return: nothing
*/

void swap(listint_t *pre, listint_t *curr)
{
	if (pre->prev)
	{
		pre->prev->next = curr;
	}
	if (curr->next)
	{
		curr->next->prev = pre;
	}

	pre->next = curr->next;
	curr->prev = pre->prev;
	pre->prev = curr;
	curr->next = pre;
}

/**
 * insertion_sort_list - Sort doubly linked list of int in ascending order
 * @list: list to be sorted
 *
 * Return: nothing
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	curr = (*list)->next;

	while (curr != NULL)
	{
		temp = curr;

		while (temp != NULL && temp->prev != NULL)
		{
			if (temp->prev->n > temp->n)
			{
				swap(temp->prev, temp);
				if (!temp->prev)
				{
					*list = temp;
				}
				print_list(*list);
			}
			else
			{
				temp = temp->prev;
			}
		}
		curr = curr->next;
	}
}
