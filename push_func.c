#include "monty.h"
/**
 * push_func - add node
 * @hd: head
 * @count: line_number
 * Return: none
*/
void push_func(stack_t **head, unsigned int count)
{
	int p, q = 0, flg = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			q++;
		for (; bus.arg[q] != '\0'; q++)
		{
			if (bus.arg[q] > 57 || bus.arg[q] < 48)
				flg = 1; }
		if (flg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(bus.file);
			free(bus.content);
			freestack_func(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.file);
		free(bus.content);
		freestack_func(*head);
		exit(EXIT_FAILURE); }
	p = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode_func(head, p);
	else
		addqueue_func(head, p);
}
