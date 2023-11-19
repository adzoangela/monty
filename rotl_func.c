#include "monty.h"
/**
 * rotl_func- rotates stack to top
 * @hd: head
 * @count: line_number
 * Return: none
 */
void rotl_func(stack_t **head,  __attribute__((unused)) unsigned int count)
{
	stack_t *temp = *head, *auxil;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	auxil = (*head)->next;
	auxil->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = auxil;
}
