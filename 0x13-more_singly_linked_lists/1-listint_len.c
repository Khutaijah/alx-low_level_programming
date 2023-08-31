#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t elements_num = 0;

	while (h)
	{
		elements_num++;
		h = h->next;
	}

	return (elements_num);
}