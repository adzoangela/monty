#include "monty.h"
/**
* freestack_func - frees  doubly linked list
* @head: head of the stack
*/
void freestack_func(stack_t *head)
{
	stack_t *auxil;

	auxil = head;
	while (head)
	{
		auxil = head->next;
		free(head);
		head = auxil;
	}
}
