#ifndef LIST_CORE_H
#define LIST_CORE_H

#define CONTENT_TYPE int  

typedef struct List{
    CONTENT_TYPE content;
    struct List *next;
} List;


/**
 *  Initialize and return a List struct.
 */ 
List* List_init(CONTENT_TYPE n);


/**
 * Create a new List struct with content n and add it to begining of the list.
 * Return the new List struct.
 */
List* List_append(CONTENT_TYPE n, List* node);


/**
 *  Remove node from list k. 
 *  If node == k, return a pointer to k->next and remove node.
 *  Else: return a new head for the node.
 */
List *List_remove(List *node, List *k);


/**
 *  Update the content of a given node.
 */
void List_update(CONTENT_TYPE n, List *node);


/**
 * Print node's content to stdout until (node.next == NULL)
 */ 
void List_print(List *node);


#endif
