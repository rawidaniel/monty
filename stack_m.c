#include "monty.h"

/**
 * stack_m - sets the format of the data to a stack (LIFO)
 * @stack: double pointer to the beginning of the stack
 * @line_number: script line number
 *
 * Return: void
 */
void stack_m(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	var.queue = STACK;
}
