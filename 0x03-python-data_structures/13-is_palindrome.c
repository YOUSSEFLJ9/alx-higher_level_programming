#include "lists.h"

/**
 * reverse - this function reverse the linked list
 *@head: the head of the linked list
 *Return: a list that is reversed of the firest version
 */
listint_t *reverse(listint_t *head)
{
	listint_t *prev = NULL, *current = head, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	return (prev);
}

/**
 * is_palindrome - Function to check if a linked list is a palindrome or not
 * @head: is the head of the linked list
 * Return: 1 if it is a palindrome, otherwise 0
 */
int is_palindrome(listint_t **head)
{
	listint_t *slowPtr = *head, *secondHalf, *fastPtr = *head, *q;
	listint_t *prevSlowPtr = *head, *midNode = NULL, *p = *head;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	while (fastPtr != NULL && fastPtr->next != NULL)
	{
		fastPtr = fastPtr->next->next;
		prevSlowPtr = slowPtr;
		slowPtr = slowPtr->next;
	}

	if (fastPtr != NULL)
	{
		midNode = slowPtr;
		slowPtr = slowPtr->next;
	}
	secondHalf = reverse(slowPtr);
	prevSlowPtr->next = NULL;
	q = secondHalf;
	while (p != NULL && q != NULL)
	{
		if (p->n != q->n)
		{
			return (0);
		}
		p = p->next;
		q = q->next;
	}
	secondHalf = reverse(secondHalf);
	if (midNode != NULL)
	{
		prevSlowPtr->next = midNode;
		midNode->next = secondHalf;
	}
	else
		prevSlowPtr->next = secondHalf;
	return (1);
}
