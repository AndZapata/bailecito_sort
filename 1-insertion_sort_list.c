#include "sort.h"

/**
 * insertion_sort_list - Comentario
 *
 * @list: Comentario
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp;
	listint_t *temp2;
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
			temp2 = node;
			if (insertion->n > node->n)
			{
				tmp = node->next;
				insertion->next = tmp;
				node->prev = insertion->prev;
				node->next = insertion;
				insertion->prev = node;
				insertion = node;
			}
			else
			{
				print_list(*list);
				insertion = insertion->next;
			}
		}
		node = node->next;
	}
}
