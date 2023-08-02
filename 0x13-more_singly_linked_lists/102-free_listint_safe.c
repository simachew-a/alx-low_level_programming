#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h) {
  size_t size = 0;
  listint_t *current = *h;
  while (current) {
    size++;
    listint_t *next = current->next;
    free(current);
    current = next;
  }
  *h = NULL;
  return size;
}
