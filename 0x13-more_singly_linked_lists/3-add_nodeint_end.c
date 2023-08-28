#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of listint_t
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node_end;
	listint_t *current_node = *head;

	new = malloc(sizeof(listint_t));
	if (!new_node_end)
		return (NULL);

	new_node_end->n = n;
	new_node_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_node_end;
		return (new_node_end);
	}

	while (current_node->next)
		current_node = current_node->next;

	current_node->next = new_node_end;

	return (new_node_end);
}
