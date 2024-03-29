#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
			
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
 * struct bus_s - args, file, line contenet
 * @ard: value
 * @file: points to monty file
 * @content: line content
 * @lifi: flag change stack
 * Desc: carries value therough the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
} bus_t;
extern bus_t bus;

ssize_t getstdin(char **lineptr, int file);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
char *clean_line(char *content);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);

void push(stack_t **stack, unsigned int line_count);
void pall(stack_t **stack, unsigned int line_coun);
void pint(stack_t **stack, unsigned int line_count);
void pop(stack_t **stack, unsigned int line_count);
void swap(stack_t **stack, unsigned int line_count);
void nop(stack_t **stack, unsigned int line_count);
void free_stack(stack_t *stack);
void queue_node(stack_t **stack, int n);
void add_node(stack_t **stack, int n);
void queue(stack_t **stack, unsigned int line_count);
void _stack(stack_t **stack, unsigned int line_count);
void _add(stack_t **stack, unsigned int line_count);
void _sub(stack_t **stack, unsigned int line_count);
void _div(stack_t **stack, unsigned int line_count);
void _mul(stack_t **stack, unsigned int line_count);
void mod(stack_t **stack, unsigned int line_count);
void pchar(stack_t **stack, unsigned int line_count);
void pstr(stack_t **stack, unsigned int line_count);
void rotl(stack_t **stack, unsigned int line_count);
void rotr(stack_t **stack, __attribute__((unused)) unsigned int line_count);
int execute(char *content, stack_t **stack, unsigned int line_cnt, FILE *file);


#endif
