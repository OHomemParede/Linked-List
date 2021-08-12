#ifndef LIST_CONTROL_H
#define LIST_CONTROL_H

#include "List_Core.h"

/**
 * Take a vector and return a List with its contents.
 */
List *List_vector2list(CONTENT_TYPE *vector, int vector_size);


/**
 *  Take a List and return a vector pointer with its contents.
 *  uses memory allocation: malloc().
 */
CONTENT_TYPE *List_list2vector(List* k);


/**
 *  Take a List and return a pointer to the node with minimum value.
 */
List *List_min(List *k);


/**
 *  Take a List and return a pointer to the node with maximum value.
 */
List *List_max(List *k);


/**
 *  Take a List and return its size.
 */
unsigned int List_size(List *k);


/**
 *  Compares two lists and returns 1 if they have the same values, otherwise return 0.
 *  This function does the check if a.content == b.content; and then goes to next node (a+1), (b+1).
 *  list a and list b might have the same values, but in a different order.
 *  You may want to sort the lists first and then use this function. 
 */
short List_comparison(List *a, List *b);


/**
 * Take a list and return a copy of it.
 */
List *List_copy(List *k);


/**
 *  free() an entire list.
 */
void List_free(List *k);

#endif