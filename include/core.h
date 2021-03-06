/**
 * This is the main file. 
 * It contains the basic definitions, functions and structure.
 */

#ifndef LIST_CORE_H
#define LIST_CORE_H


// CONTENT_TYPE should be a number. long int, float, double etc.
// it should work with any Basic Type in C. https://en.wikipedia.org/wiki/C_data_types
#define CONTENT_TYPE int  
#define _NULL_ ((void*)0)


typedef struct List{
    CONTENT_TYPE content;
    struct List *next;
} List;


/**
 *  Initialize and returns a new List struct address.
 */ 
List* List_init(CONTENT_TYPE n);


/**
 * Create a new List struct with content `n` and add it to begining of the list.
 * Returns the new List struct address pointing out to `node`.
 */
List* List_append(CONTENT_TYPE n, List* node);


/**
 *  Remove `node` from list `k`. 
 *  if `node` == `k`, returns `k->next`.
 *  else, returns `k`.
 */
List* List_remove(List* node, List* k);


/**
 *  Update the content of a given `node` with `n`.
 */
void List_update(CONTENT_TYPE n, List* node);


/**
 * Print `node` content to stdout until `node->next == NULL`
 */ 
void List_print(List* node);


#endif
