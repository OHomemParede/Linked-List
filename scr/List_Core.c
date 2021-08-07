#include <stdio.h>
#include <stdlib.h>
#include "../include/List_Core.h"

#define _NULL_ ((void *)0)


List* List_init(CONTENT_TYPE n){
    List *cell;
    cell = malloc(sizeof(List));
    cell->content = n;
    cell->next = _NULL_; 
    return cell;
}


List* List_append(CONTENT_TYPE n, List *node){
    List *cell;
    cell = List_init(n);
    cell->next = node;
    return cell;
}


int List_remove(List *node, List *k){
    while(k->next != node){
        if(k->next == _NULL_)
            return 0;
        k = k->next;
    }
    k->next = node->next;
    free(node);
    return 1;
}


void List_update(CONTENT_TYPE n, List *node){
    node->content = n;
}


void List_print(List *node){
    printf("[");
    while(1){
        if(node->next == _NULL_){
            printf("%d]",node->content);
            break;
        }
        printf("%d, ", node->content);
        node = node->next; 
    }
    printf("\n");
}
