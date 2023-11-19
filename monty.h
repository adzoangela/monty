#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct bus_s - args, file, line content
 * @arg: value input
 * @fl: pointer
 * @ct: line content
 * @lifi: flag change stack <-> queue
 * Description: holds program values
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
void add_func(stack_t **head, unsigned int count);
void addnode_func(stack_t **head, int n);
void divide_func(stack_t **head, unsigned int count);
int execute_func(char *content, stack_t **stack, unsigned int count, FILE *file);
void mod_func(stack_t **head, unsigned int count);
void mul_func(stack_t **head, unsigned int count);
void nop_func(stack_t **head, unsigned int count);
void pall_func(stack_t **head, unsigned int count);
void pchar_func(stack_t **head, unsigned int count);
void pint_func(stack_t **head, unsigned int count);
void pop_func(stack_t **head, unsigned int count);
void pstr_func(stack_t **head, unsigned int count);
void push_func(stack_t **head, unsigned int count);
void addqueue_func(stack_t **head, int n);
void queue_func(stack_t **head, unsigned int count);
void rotl_func(stack_t **head,  __attribute__((unused)) unsigned int count);
void rotr_func(stack_t **head, __attribute__((unused)) unsigned int count);
void stack_func(stack_t **head, unsigned int count);
void sub_func(stack_t **head, unsigned int count);
void swap_func(stack_t **head, unsigned int count);
void freestack_func(stack_t *head);
#endif
