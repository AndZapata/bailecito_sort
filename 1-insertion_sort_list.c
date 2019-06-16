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
	listint_t *insertion;

	insertion = (*list)->next;
	while (insertion)
	{
		while (insertion->prev && insertion->n < insertion->prev->n)
		{
			insertion->prev->next = insertion->next;
			if (insertion->next)
				insertion->next->prev = insertion->prev;
			insertion->next = insertion->prev;
			insertion->prev = insertion->prev->prev;
			insertion->next->prev = insertion;
			if (!insertion->prev)
				*list = insertion;
			else
				insertion->prev->next = insertion;
			print_list(*list);
		}
		insertion = insertion->next;
	}
}
