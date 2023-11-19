#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - code fpr monty
* @argc: argument
* @argv: file location
* Return: 0
*/
ssize_t getline(char **r_l, size_t *n, FILE *file);

int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t sz = 0;
	ssize_t r_l = 1;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (r_l > 0)
	{
		content = NULL;
		r_l = getline(&content, &sz, file);
		bus.content = content;
		count++;
		if (r_l > 0)
		{
			execute_func(content, &stack, count, file);
		}
		free(content);
	}
	freestack_func(stack);
	fclose(file);
return (0);
}

