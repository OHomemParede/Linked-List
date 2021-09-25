/**
 * This is an optional file, that requires core.o and consequently core.h. 
 * It contains some auxiliary functions.
 */

#ifndef LIST_CONTROL_H
#define LIST_CONTROL_H

#include "core.h"


/**
 * Take the `vector` and returns a `List address` with its contents.
 */
List* List_vectorToList(CONTENT_TYPE* vector, unsigned long vector_size);


/**
 *  Take the List `k` and returns a `vector address` with its contents.
 *  uses memory allocation: malloc().
 */
CONTENT_TYPE* List_listToVector(List* k);


/**
 *  Take the List `k` and returns the `node address` with the `minimum value`.
 */
List* List_min(List* k);


/**
 *  Take the List `k` and returns the `node address` with the `maximum value`.
 */
List* List_max(List* k);


/**
 *  Take the List `k` and returns its size.
 *  The return value is in the range: [0, 4294967295] `unsigned long`.
 */
unsigned long List_size(List* k);


/**
 *  Compares two lists, `a` and `b`, and returns 1 if they have the same values, otherwise return 0.
 *  Returns 0 if theses list have different sizes.
 *  This function does the check if `a.content` == `b.content`; and then goes to next node `a+1`, `b+1`,
 *  List `a` and List `b` might have the same values, but in a different order,
 *  you may want to sort the lists first and then use this function. 
 */
short List_comparison(List* a, List* b);


/**
 * Take the List `k` and returns a `List address` with copy of it.
 */
List* List_copy(List* k);


/**
 *  free() an entire List `k`.
 */
void List_free(List* k);


/**
 * Find the first occurrence of a specific value `n` in List `k`.
 * if success return `node address`, else return `NULL`.
 */ 
List* List_find(CONTENT_TYPE n, List* k);


/**
 *  Implementation of the binary search algorithm.
 *  List `k` must be sorted by `ascending order`.
 *  if `n` was found in List `k`, returns the `address of the found node`, else return `NULL`.
 */
List* List_binarySearch(CONTENT_TYPE n, List* k);

#endif
