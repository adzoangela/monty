#include "monty.h"
/**
 * add_func - combines elements stack.
 * @head: head
 * @count: line_number
 * Return: none
*/
void add_func(stack_t **head, unsigned int count)
{
	stack_t *a;
	int length = 0, auxil;

	a = *head;
	while (a)
	{
		a = a->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		freestack_func(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	auxil = a->n + a->next->n;
	a->next->n = auxil;
	*head = a->next;
	free(a);
}
