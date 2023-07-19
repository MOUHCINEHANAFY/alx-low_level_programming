#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - This function select opration.
 * @s: Operator used as an argument.
 * Return: return oprator to be used.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"%", op_mod},
		{"+", op_add},
		{"*", op_mul},
		{"/", op_div},
		{"-", op_sub},
		{NULL, NULL}
	};
	int i = 0;

	while (*(ops[i].op) != *s && ops[i].op != NULL)
	{
		i++;
	}
	return (ops[i].f);
}
