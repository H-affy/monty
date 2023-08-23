#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>

/**
 * struct stack_s - doubly linked list representation of stacks (or queue).
 * @n: integer.
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
 * @f: function to handle opcode
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
 * struct help - argument of the current opcode
 * @data_struct: stack mode
 * @argument: the arguments
 *
 * Description: global structure used
 */
typedef struct help
{
	int data_struct;
	char *argument;
} help;
help global;

void push(stack_t **stack, unsigned int line_count);
void pall(stack_t **stack, unsigned int line_count __attribute__((unused)));
void pint(stack_t **stack, unsigned int line_count);
void pop(stack_t **stack, unsigned int line_count);

void file_error(char *argv);
void error_usage(void);

#endif
