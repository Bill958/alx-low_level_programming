#include "lists.h"
/**
 *sum_listint - sums up data in the linked list
 *@head: head of the list
 *Return: sum of the number
 */
int sum_listint(listint_t *head)
{
listint_t *cursor = head;
size_t sum = 0;

while (cursor != NULL)
{
sum += cursor->n;
cursor = cursor->next;
}
return (sum);
}
