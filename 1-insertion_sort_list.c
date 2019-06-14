#include "sort.h"

/**
 * insertion_sort_list - Comentario
 *
 * @list: Comentario
 *
 * Return: Nothing
 */
void swap(listint_t *left, listint_t *right)
{
	listint_t *temp;

	temp = left->prev;
	if (temp)
		temp->next = right;
	right->prev = temp;
	left->prev = right;
	left->next = right->next;
	right->next = left;
	if (left->next != NULL)
		left->next->prev = left;
}

/**
 * insertion_sort_list - Comentario
 *
 * @list: Comentario
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node;
	listint_t *head;
	listint_t *insertion;

	head = *list;
	node = *list;
	node = node->next;
	while (node)
	{
		insertion = head;
		while (insertion != node)
		{
			if (insertion->n > node->n)
				swap(node, insertion);
			else
			{
				print_list(*list);
				insertion = insertion->next;
			}
		}
		node = node->next;
	}
}
