#include "monty.h"

/**
 * div_m - divide second element of stack by top element
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void div_m(stack_t **stack, unsigned int line_number)
{
	int num;

	if (var.stack_len < 2)
	{
		dprintf(STDERR_FILENO,
			"L%u: can't div, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	num = (*stack)->n;
	pop_m(stack, line_number);
	if (num == 0)
	{
		dprintf(STDERR_FILENO,
			"L%u: division by zero\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->n /= num;
}
