#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node-end - adds a new node at the end of a list_t list
 * @head: pointer to the list_t list head
 * @str:the string to be added to the list_t list
 * Description: this function creates a new node containing
 * the provided string and appends it to the end of the linked
 * list. if memory allocation for the new node or string copy fails,
 * the funtion returns NULL.
 * Return: if the function fails - NULL
 * otherwise - the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *ptr;
	int len;
	list_t *new, *end;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	ptr = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	len = strlen(str);

	new->str = ptr;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (*head);
}
