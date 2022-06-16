#include "monty.h"

/**
 * sub_m - subtract top element of stack from next element and push result
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void sub_m(stack_t **stack, unsigned int line_number)
{
	int num;

	if (var.stack_len < 2)
	{
		dprintf(STDERR_FILENO,
			"L%u: can't sub, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	num = (*stack)->n;
	pop_m(stack, line_number);
	(*stack)->n -= num;
}
