#include "sort.h"

/**
 * insertion_sort_list - function to sort a doubly linked list
 *
 * @list: pointer to the linked list
 *
 * Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *previous;

	if ((list != NULL) && (*list != NULL) && ((*list)->next != NULL))
	{
		current = (*list)->next;
		while (current)
		{
			previous = current->prev;
			while ((previous) && ((current->n) < (previous->n)))
			{
				swap(current, previous);
				previous = current->prev;
				if (current->prev == NULL)
					*list = current;
				print_list(*list);
			}
			current = current->next;
		}
	}
}
/**
 * _swap - function to swap two nodes
 * Return: Void
 * @current: The node with the biggest value
 * @previous: The node with the smallest value
*/
void swap(listint_t *current, listint_t *previous)
{
	if (current->next)
		current->next->prev = previous;
	previous->next = current->next;
	if (previous->prev)
		previous->prev->next = current;
	current->next = previous;
	current->prev = previous->prev;
	previous->prev = current;
}
