#include <stdlib.h>
#include "../include/List_Core.h"
#include "../include/List_Module_Control.h"


List *List_vector2list(CONTENT_TYPE *vector, unsigned int vector_size){
    unsigned int a;
    List *k = List_init(0);
    for(a=0; a<vector_size; a++){
        k->content = vector[a];
        if( !((vector_size -1) == a) ) // vector_size -1) == a somente quando v[vector_size -1] → ultimo valor
            k = List_append(0, k);
    }
    return k;
}


CONTENT_TYPE *List_list2vector(List* k){
    CONTENT_TYPE *v;
    v = malloc(sizeof(CONTENT_TYPE) * List_size(k));
    unsigned int a=0;
    while(k != NULL){
        v[a] = k->content;
        a++;
        k = k->next;
    }
    return v;
}


List *List_min(List *k){
    List *min = k;
    while(k != NULL){
        if(k->content < min->content)
            min = k;
        k = k->next;
    }
    return min;
}


List *List_max(List *k){
    List *max = k;
    while(k != NULL){
        if(k->content > max->content)
            max = k;
        k = k->next;
    }
    return max;
}


unsigned int List_size(List *k){
    unsigned int size = 0;
    while(k != NULL){
        size++;
        k = k->next;
    }
    return size;
}


short List_comparison(List *a, List *b){
    while(1){
        if(a->content != b->content)
            return 0;
        
        if((a->next==NULL || b->next==NULL) && !(a->next==NULL && b->next==NULL))
            return 0;
        
        if(a->next==NULL && b->next==NULL)
            return 1;

        else{
          a = a->next;
          b = b->next;
        }
    }
}


List *List_copy(List *k){
    List *copy = List_init(k->content);
    k = k->next;
    while(k != NULL){
        copy = List_append(k->content, copy);
        k = k->next;
    }
    return copy;
}


void List_free(List *k){
    List *p;
    while(k != NULL){
        p = k->next;
        free(k);
        k = p;
    }   
}
