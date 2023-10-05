#include "lists.h"
/*
 *check_cycle - function check if the linked list in cycle
 *@lint: the head node to check with
 *Return: 1 if the list is in cycle , otherwise 0
 */
int check_cycle(listint_t *list)
{
	listint_t *check = list;
	while(list && check && check->next)
	{
		list = list->next;
		check = check->next->next;
			if (list == check)
				return (1);
	}
	return (0);
}
