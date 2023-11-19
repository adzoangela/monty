#include "monty.h"
/**
 * pint_func - prints top
 * @hd: head
 * @count: line_number
 * Return: none
*/
void pint_func(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		freestack_func(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
