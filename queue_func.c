#include "monty.h"
/**
 * queue_func - prints top
 * @hd: head
 * @count: line_number
 * Return: none
*/
void queue_func(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	bus.lifi = 1;
}

/**
 * addqueue_func - add node to tail
 * @n: new_value
 * @hd: head
 * Return: none
*/
void addqueue_func(stack_t **head, int n)
{
	stack_t *new_nd, *auxil;

	auxil = *head;
	new_nd = malloc(sizeof(stack_t));
	if (new_nd == NULL)
	{
		printf("Error\n");
	}
	new_nd->n = n;
	new_nd->next = NULL;
	if (auxil)
	{
		while (auxil->next)
			auxil = auxil->next;
	}
	if (!auxil)
	{
		*head = new_nd;
		new_nd->prev = NULL;
	}
	else
	{
		auxil->next = new_nd;
		new_nd->prev = auxil;
	}
}
