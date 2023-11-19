#include "monty.h"
/**
 * pstr_func - prints the string from top
 * @hd: head
 * @count: line_number
 * Return: none
*/
void pstr_func(stack_t **head, unsigned int count)
{
	stack_t *a;
	(void)count;

	a = *head;
	while (a)
	{
		if (a->n > 127 || a->n <= 0)
		{
			break;
		}
		printf("%c", a->n);
		a = a->next;
	}
	printf("\n");
}
