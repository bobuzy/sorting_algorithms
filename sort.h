#ifndef SORT_HEADER
#define SORT_HEADER

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
listint_t *create_listint(const int *array, size_t size);
void swap(listint_t *pre, listint_t *curr);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void sort_recursion(int *array, size_t size, ssize_t start, ssize_t end);
size_t split(int *array, size_t size, size_t start, size_t end);
void swap_int(int *array, size_t size, int *x, int *y);

#endif
