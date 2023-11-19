#include "monty.h"
/**
 * pop_func  - prints top
 * @hd: head
 * @count: line_number
 * Return: none
*/
void pop_func(stack_t **head, unsigned int count)
{
	stack_t *a;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.file);
		free(bus.content);
		freestack_func(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	*head = a->next;
	free(a);
}
