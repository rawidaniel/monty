#include "monty.h"

/**
 * mul_m - multiply top two elements of stack and push result
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void mul_m(stack_t **stack, unsigned int line_number)
{
	int num;

	if (var.stack_len < 2)
	{
		dprintf(STDERR_FILENO,
			"L%u: can't mul, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	num = (*stack)->n;
	pop_m(stack, line_number);
	(*stack)->n *= num;
}
