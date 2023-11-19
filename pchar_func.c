#include "monty.h"
/**
 * pchar_func - prints top char of stack
 * @hd: head
 * @count: line_number
 * Return: none
*/
void pchar_func(stack_t **head, unsigned int count)
{
	stack_t *a;

	a = *head;
	if (!a)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		freestack_func(*head);
		exit(EXIT_FAILURE);
	}
	if (a->n > 127 || a->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(bus.file);
		free(bus.content);
		freestack_func(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", a->n);
}
