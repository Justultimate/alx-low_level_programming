#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list.
 * @head: double pointer to the list_t.
 * @str: string to the new list.
 *
 * Return: address of the new element of NULL if fail.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current_node;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (n = 0; str[n]; n++)
		;
	new->len = n;
	new->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = new;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new;
	}
	return (new);
}
