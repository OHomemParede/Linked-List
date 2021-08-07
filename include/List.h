#ifndef LIST_H
#define LIST_H



typedef struct List{
    int value;
    struct List *next;
} List;


/**
 *  Initialize and return a List struct.
 */ 
List List_init(int n);


/**
 * Add a new node
 */
void Lista_add(int n, List node);


/**
 *  Remove duplicate values
 */
void List_remove_duplicate(); 


/**
 *  Find and return the lowest value.
 */ 
int List_min();


/**
 * Find and return the first occurrence of the specific value.
 */ 
int List_find(int n);


#endif