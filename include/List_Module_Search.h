#ifndef LIST_MODULE_SEARCH_H
#define LIST_MODULE_SEARCH_H

#include "List_Core.h"

/**
 * Find the first occurrence of a specific value n in list k.
 * if success return node's address, else return NULL
 */ 
List *List_find(CONTENT_TYPE n, List *k);

#endif
