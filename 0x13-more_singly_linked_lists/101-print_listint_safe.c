#include "lists.h"

/**
 * free_listp - start
 * @head: fff
 * Return: 0
 */

void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
* print_listint_safe - start
* @head: fff
* Return: 0
*/

size_t print_listint_safe(const listint_t *head)
{
	sixe_t nodes = 0;
	listp_t *hptr, *name, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(lisp_t));

		if (new == NULL)
			exist(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("->[%p]%d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nnodes);
			}
		}
		printf("[*p]%d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}
	free_listp(&hptr);
	return (nnoded);
}
