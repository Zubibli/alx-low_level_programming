#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add a new node at the beginning of a list_t list
 * @head: pointer to the list_t list head.
 * @str: the string to be added to the list_t list
 *
 * Return: if the function fails - NULL
 * otherwise - the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *ptr;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	ptr = strdup(str);
	if (ptr == NULL)
	{
		free(new);
		return (NULL);
	}
	len = strlen(str);
	new->str = ptr;
	new->len = len;
	new->next = *head;

	*head = new;
	return (new);
}
