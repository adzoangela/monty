#include "monty.h"
/**
  *rotr_func- rotates stack to bottom
  *@hd:  head
  *@count: line_number
  *Return: none
 */
void rotr_func(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *cpy;

	cpy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cpy->next)
	{
		cpy = cpy->next;
	}
	cpy->next = *head;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*head)->prev = cpy;
	(*head) = cpy;
}
