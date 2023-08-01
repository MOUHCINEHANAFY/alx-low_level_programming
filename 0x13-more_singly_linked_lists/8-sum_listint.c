#include "lists.h"

/**
 * sum_listint - This function sum int in list
 * @head: Header of list
 * Return: result of sum
 */


int sum_listint(listint_t *head)
{
	int sumint;

	for (sumint = 0; head; head = (*head).next)
	{
		sumint += (*head).n;
	}
	return (sumint);
}
