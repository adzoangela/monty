#include "monty.h"
/**
  *sub_func - sustration of programme
  *@hd: head
  *@count: line_number
  *Return: none
 */
void sub_func(stack_t **head, unsigned int count)
{
	stack_t *auxil;
	int suss, nd;

	auxil = *head;
	for (nd = 0; auxil != NULL; nd++)
		auxil = auxil->next;
	if (nd < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		freestack_func(*head);
		exit(EXIT_FAILURE);
	}
	auxil = *head;
	suss = auxil->next->n - auxil->n;
	auxil->next->n = suss;
	*head = auxil->next;
	free(auxil);
}
