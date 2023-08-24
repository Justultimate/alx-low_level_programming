#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list.
 * @head: double pointer to the head.
 * @str: string to the element.
 * Return: address of the new element or NULL if fail.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (new);
}
