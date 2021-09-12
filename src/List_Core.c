#include <stdio.h>
#include <stdlib.h>
#include "../include/List_Core.h"


List* List_init(CONTENT_TYPE n){
    List* cell;
    cell = malloc(sizeof(List));
    cell->content = n;
    cell->next = _NULL_; 
    return cell;
}


List* List_append(CONTENT_TYPE n, List* node){
    List* cell;
    cell = List_init(n);
    cell->next = node;
    return cell;
}


List* List_remove(List* node, List* k){
    List* head = k;
    if(k == node){
        List* p;
        p = k->next;
        free(node);
        return p;
    }
    while(1){
        if(k->next == node){
            k->next = node->next;
            free(node);
            return k;
        }
        if(k->next == _NULL_)
            return head;
        
        k = k->next;
    }
}


void List_update(CONTENT_TYPE n, List* node){
    node->content = n;
}


void List_print(List* node){
    if(node == NULL)
        printf("* empty *\n");
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
