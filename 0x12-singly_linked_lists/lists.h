#ifndef LISTS_H
#define LISTS_H

/*
 * file: lists.h
 * Authour: Okereke Victor
 * Description: header file definition for function prototypes used in 0x12-singly_linked_list
 */
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: string lenght
 * @next: points to the next node
 *
 * Description: singly lined list node structure for Holberton Project
 */

/* Definition of the list_t structure */
typedef struct list_s
{
    char *str;           /* Pointer to the string data */
    unsigned int len;    /* Length of the string */
    struct list_s *next; /* Pointer to the next node */
} list_t;

size_t print_list(const list_t *h);
int _putchar(char c);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */
