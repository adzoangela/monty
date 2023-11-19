#include "monty.h"
/**
* execute_func - executes the opcode
* @stack: head
* @count: line_counter
* @fl: pointer
* @ct: line content
* Return: none
*/
int execute_func(char *content, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t opst[] = {
				{"push", push_func}, {"pall", pall_func}, {"pint", pint_func},
				{"pop", pop_func},
				{"swap", swap_func},
				{"add", add_func},
				{"nop", nop_func},
				{"sub", sub_func},
				{"div", divide_func},
				{"mul", mul_func},
				{"mod", mod_func},
				{"pchar", pchar_func},
				{"pstr", pstr_func},
				{"rotl", rotl_func},
				{"rotr", rotr_func},
				{"queue", queue_func},
				{"stack", stack_func},
				{NULL, NULL}
				};
	unsigned int b = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[b].opcode && op)
	{
		if (strcmp(op, opst[b].opcode) == 0)
		{	opst[b].f(stack, count);
			return (0);
		}
		b++;
	}
	if (op && opst[b].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, op);
		fclose(file);
		free(content);
		freestack_func(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
