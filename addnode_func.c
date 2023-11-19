#include "monty.h"
/**
 * addnode_func - adds node
 * @hd: head
 * @n: new_value
 * Return: no return
*/
void addnode_func(stack_t **head, int n)
{

	stack_t *new_n, *auxil;

	auxil = *head;
	new_n = malloc(sizeof(stack_t));
	if (new_n == NULL)
	{ printf("Error\n");
		exit(0); }
	if (auxil)
		auxil->prev = new_n;
	new_n->n = n;
	new_n->next = *head;
	new_n->prev = NULL;
	*head = new_n;
}
