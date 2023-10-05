#include "lists.h"
/**
 * node - this function creart
 * @number: number to insert in the new node
 * Return: pointer to the new node
 */
listint_t *node(int number)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->n = number;
		new_node->next = NULL;
	}
	return (new_node);
}

/**
  * insert_node - inserts a number into a sorted singly linked list
  * @head: pointer to the hrad of the linked list
  * @number: number insert
  * Return: pointer to the new node or NULL
  */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node = node(number);

	if (!new_node)
		return (NULL);
	if (*head == NULL || number < (*head)->n)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		listint_t *current = *head;

		while (current->next && current->next->n <= number)
		{
			current = current->next;
		}
		new_node->next = current->next;
		current->next = new_node;
	}
	return (new_node);
}
