#include "monty.h"
/**
 * pall_func - prints stack
 * @hd: head
 * @count: null
 * Return: none
*/
void pall_func(stack_t **head, unsigned int count)
{
	stack_t *a;
	(void)count;

	a = *head;
	if (a == NULL)
		return;
	while (a)
	{
		printf("%d\n", a->n);
		a = a->next;
	}
}
